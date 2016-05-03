#include "stdafx.h"

#include "Server.h"
#include "Connector.h"
#include "Matchmaker.h"

#include <thread>

Server::Server() {}

void Server::start()
{
	PlayerQueue queue;
	Connector connManager(queue);

	std::thread t(&Connector::run, connManager);

	// Run free my thread
	t.detach();


	while (true)
	{
		Matchmaker matchmaker;
		std::vector<PlayerInfo> players;
		
		
		size_t len = queue.length(); // Cache the length to not block the connection thread
		for (int i = 0; i < len - (len % 2); i++)
		{
			players.push_back(queue.pop());
		}

		for (auto& player: players)
		{
			player.generateRankings(players);
		}
	}


}