#pragma once

#include "stdafx.h"

#include "PlayerQueue.h"
#include "Logger.h"

class Server
{
public:

	Server();

	void start();

private:

	PlayerQueue m_queue;

	Logger *logger = Logger::Instance();

};