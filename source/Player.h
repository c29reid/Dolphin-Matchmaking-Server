#pragma once

#include "PlayerInfo.h"

#include <vector>

class Player
{
public:
	Player(PlayerInfo info);

	// Propose a connection to another player
	void propose(Player& player);

	// Reject another player
	void reject(Player& player);
	void choose();

	std::vector< PlayerInfo >& getRankings();

	void generateRankings(std::vector<Player> players);

	double distance(Player& other);

private:
	std::vector< PlayerInfo > m_rankings;
	std::vector< PlayerInfo > m_requests;

	PlayerInfo m_playerInfo;
};