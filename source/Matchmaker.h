#pragma once

#include "stdafx.h"

#include "PlayerQueue.h"
#include "Player.h"

#include <utility>
#include <vector>

class Matchmaker
{
public:
	Matchmaker();

	std::vector< std::pair<PlayerInfo, PlayerInfo> > match(std::vector<Player> players);

private:

	//PlayerQueue& m_queue;
};