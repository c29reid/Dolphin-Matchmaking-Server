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
	// TODO: Split this up in to a public + private reject so other objects aren't accessing eachothers members
	for (auto itr = player.m_rankings.begin(); itr != m_rankings.end(); )
	{
		if (itr->m_playerInfo == m_playerInfo)
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
	if (m_rankings.size() <= 1)
	{
		return;
	}

	// Choose the best fit proposal based player rankings
	size_t chosenIdx = std::find(m_rankings.begin(), m_rankings.end(), m_requests[0]) - m_rankings.begin();
	for (auto &proposal : m_requests)
	{
		size_t reqRankIdx = std::find(m_rankings.begin(), m_rankings.end(), proposal) - m_rankings.begin();
		
		// Check to see if this proposal is better than what we have currently
		chosenIdx = (reqRankIdx < chosenIdx) ? reqRankIdx : chosenIdx;
	}

	// Remove all requests from players we didn't choose
	for (auto &req : m_requests)
	{
		size_t reqRankIdx = std::find(m_rankings.begin(), m_rankings.end(), req) - m_rankings.begin();

		if (reqRankIdx != chosenIdx)
		{
			req.reject(*this);
		}
	}
}

std::vector<Player>& Player::getRankings()
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


bool Player::operator==(const Player& other) const
{
	return other.m_playerInfo == m_playerInfo;
}
