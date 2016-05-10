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

	// Decide on who's proposal to accept
	void choose();

	std::vector< Player >& getRankings();

	void generateRankings(std::vector<Player> players);

	double distance(Player& other);

	bool operator==(const Player & other) const;

private:
	std::vector< Player > m_rankings;
	std::vector< Player > m_requests;

	PlayerInfo m_playerInfo;
};