#pragma once
#include "stdafx.h"

#include "PlayerQueue.h"

#include <SFML/Network/TcpSocket.hpp>
#include <SFML/Network/TcpListener.hpp>

class Connector
{
public:
	Connector(PlayerQueue& queue);

	void run();
	void stop();
	PlayerInfo parsePacket(sf::Packet packet);

private:
	volatile bool m_running;
	PlayerQueue& m_queue;


};