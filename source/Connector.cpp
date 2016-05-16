#include "stdafx.h"

#include "PlayerInfo.h"

#include <string>
#include <iostream>

#include "Connector.h"

#include <SFML/Network/Packet.hpp>
#include <SFML/Network/TcpSocket.hpp>
#include <SFML/Network/TcpListener.hpp>


Connector::Connector(PlayerQueue& queue) :
	m_running(true),
	m_queue(queue)
{}


void Connector::run()
{
	sf::TcpListener listener;

	listener.listen(5232); // TODO Configify this port
	while (m_running)
	{
		sf::TcpSocket sock;
		listener.accept(sock);

		logger->logMessage("Player Connected!");

		sf::Packet packet;
		sock.receive(packet);

		logger->logMessage("Got Packet!");
		PlayerInfo player = parsePacket(packet);

		std::string playerName;
		packet >> playerName;

		logger->logMessage("Player: " + playerName + " connected");

		m_queue.push(player);
	}
}


void Connector::stop()
{
	m_running = false;
}

PlayerInfo Connector::parsePacket(sf::Packet &packet)
{
	std::string playerCode;
	std::string gameHash;
	
	int latitude;
	int longitude;
	
	std::string userIp;

	packet >> playerCode >> gameHash >> latitude >> longitude >> userIp;

	GeoLocation userLoc(latitude, longitude);

	PlayerInfo tempPlayer(playerCode, gameHash, userLoc, sf::IpAddress(userIp));
	return tempPlayer;
}