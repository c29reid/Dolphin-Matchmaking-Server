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

		std::cout << "Player Connected!" << std::endl;

		GeoLocation todoLoc;
		sf::IpAddress todoIp;
		PlayerInfo player("TODO", "TODO", todoLoc, todoIp);
		m_queue.push(player);
	}
}


void Connector::stop()
{
	m_running = false;
}

PlayerInfo Connector::parsePacket(sf::Packet packet)
{
	std::string playerCode;
	std::string gameHash;
	
	double latitude;
	double longitude;
	
	std::string userIp;

	packet >> playerCode >> gameHash >> latitude >> longitude >> userIp;

	GeoLocation userLoc(latitude, longitude);

	PlayerInfo tempPlayer(playerCode, gameHash, userLoc, sf::IpAddress(userIp));
	return tempPlayer;
}