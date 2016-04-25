#include "stdafx.h"

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
		
		std::cout << "Player Connected!" << std::endl;
		PlayerInfo player("TODO", "TODO");
		m_queue.push(player);
	}
}


void Connector::stop()
{
	m_running = false;
}