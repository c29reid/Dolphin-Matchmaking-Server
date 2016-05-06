#include "stdafx.h"

#include "Matchmaker.h"
#include "Player.h"

#include <algorithm>

Matchmaker::Matchmaker()
{
}

std::vector<std::pair<PlayerInfo, PlayerInfo>> Matchmaker::match(std::vector<Player>& players)
{
	std::vector<std::pair<PlayerInfo, PlayerInfo>> matches;

	// Create a ranking between players based on a similar problem to stable marriage
	// https://en.wikipedia.org/wiki/Stable_roommates_problem
	
	// ---------- Phase 1, reject proposals we prefer less ----------
	
	// Generate the initial player list
	for (auto &player : players)
	{
		player.generateRankings(players);
	}


	auto isStable = [players]()
	{
		for (auto player : players)
		{
			if (player.getRankings().size() != 1)
				return false;
		}
		return true;
	};

	while (!isStable())
	{

	}

	return matches;
}
