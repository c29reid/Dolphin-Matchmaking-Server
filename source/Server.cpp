#include "stdafx.h"

#include "Server.h"
#include "Connector.h"

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

		// TODO
	}


}