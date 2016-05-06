#include "stdafx.h"

#include "Player.h"

#include <algorithm>

Player::Player(PlayerInfo info) :
	m_playerInfo(info)

{
}

void Player::propose(Player & player)
{
	player.m_requests.push_back(m_playerInfo);
}

void Player::reject(Player & player)
{
	for (auto itr = player.m_rankings.begin(); itr != m_rankings.end(); )
	{
		if (*itr == m_playerInfo)
		{
			itr = m_rankings.erase(itr);
		}
		else
		{
			itr++;
		}
	}
}

void Player::choose()
{
}

std::vector<PlayerInfo>& Player::getRankings()
{
	return m_rankings;
}


void Player::generateRankings(std::vector<Player> players)
{
	// Remove this object from all players
	for (auto itr = players.begin(); itr != players.end(); )
	{
		if (this->m_playerInfo == itr->m_playerInfo)
		{
			itr = players.erase(itr);
		}
		else
		{
			itr++;
		}
	}

	// Create a preference array based on distances
	std::sort(players.begin(), players.end(), [this](Player &player1, Player &player2)
	{
		return distance(player1) < distance(player2);
	}
	);
}

double Player::distance(Player & other)
{
	// Get the distance between two objects
	return m_playerInfo.distance(other.m_playerInfo);
}
