#include "stdafx.h"

#include "Server.h"
#include "Connector.h"
#include "Matchmaker.h"

#include <thread>
#include <iostream>
#include <thread>

Server::Server() {}

void Server::start()
{

	std::cout << "Starting Server" << std::endl;
	PlayerQueue queue;
	Connector connManager(queue);

	std::thread t(&Connector::run, connManager);

	// Run free my thread
	t.detach();

	while (true)
	{
		// TODO: When we get multiple search queues going, iterate through them and record 
		// the last time matchmaking has been done for that queue instead of a naive 30s sleep
		std::this_thread::sleep_for(std::chrono::milliseconds(30000)); // Let the connections build up before we search for good matches
		Matchmaker matchmaker;
		std::vector<Player> players;
		
		size_t len = queue.length(); // Cache the length to not block the connection thread
		for (size_t i = 0; i < len - (len % 2); i++)
		{
			players.push_back(Player(queue.pop()));
		}

		for (auto& player: players)
		{
			player.generateRankings(players);
		}

		matchmaker.match(players);

		std::cout << "Done matching" << std::endl;
	}


}