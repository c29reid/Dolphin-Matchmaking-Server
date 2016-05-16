#pragma once

#include "stdafx.h"

#include "PlayerQueue.h"

class Server
{
public:

	Server();

	void start();

private:

	PlayerQueue m_queue;

};