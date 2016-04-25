#pragma once
#include "stdafx.h"

#include "PlayerQueue.h"


class Connector
{
public:
	Connector(PlayerQueue& queue);

	void run();
	void stop();

private:
	volatile bool m_running;
	PlayerQueue& m_queue;


};