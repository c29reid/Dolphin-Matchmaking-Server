#include "stdafx.h"

#include "PlayerInfo.h"

#include <string>
#include <iostream>

#include "Connector.h"
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
		
		std::cout << "Player Connected!" << std::endl; // TODO: Make a logger or something for concurrent calls

		PlayerInfo player(L"TODO", L"TODO");
		m_queue.push(player);
	}
}


void Connector::stop()
{
	m_running = false;
}