#include "stdafx.h"

#include "PlayerInfo.h"

#include <algorithm>

PlayerInfo::PlayerInfo(std::wstring playerCode, std::wstring gameHash) :
	m_playerCode(playerCode),
	m_gameHash(gameHash),
	m_match(nullptr)
	{}

std::wstring PlayerInfo::getPlayerCode() 
{
	return m_playerCode;
}

std::wstring PlayerInfo::getGameHash()
{
	return m_gameHash;
}

void PlayerInfo::generateRankings(std::vector<PlayerInfo> players)
{
	m_rankings = players;

	// Remove this from all players
	for (auto itr = players.begin(); itr != players.end(); )
	{
		if (*this == *itr)
		{
			itr = players.erase(itr);
		}
		else
		{
			itr++;
		}
	}

	std::sort(players.begin(), players.end(), [](PlayerInfo &player1, PlayerInfo &player2)
	{
		return distance(player1) < distance(player2);
	}
	);
}

bool PlayerInfo::operator==(const PlayerInfo & other) const
{
	return other.m_playerCode == m_playerCode && m_gameHash == other.m_gameHash ;
}
