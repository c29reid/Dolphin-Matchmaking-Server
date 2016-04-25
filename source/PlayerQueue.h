#pragma once

#include "stdafx.h"

#include <queue>

#include <mutex>
#include <queue>

#include "PlayerInfo.h"


// Thread safe player Queue
class PlayerQueue
{

public:
	PlayerQueue();

	PlayerInfo pop();
	void push(PlayerInfo playerInfo);

	int length();

private:
	std::mutex m_mutex;
	std::queue<PlayerInfo> m_players;

};