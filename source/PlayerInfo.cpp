#include "stdafx.h"

#include "PlayerInfo.h"

#include <algorithm>

PlayerInfo::PlayerInfo(std::string playerCode, std::string gameHash, GeoLocation playerPos, sf::IpAddress userIp) :
	m_playerCode(playerCode),
	m_gameHash(gameHash),
	playerPos(playerPos),
	userIp(userIp),
	m_match(nullptr)
{}

std::string PlayerInfo::getPlayerCode() 
{
	return m_playerCode;
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

	// Create a preference array based on distances
	std::sort(players.begin(), players.end(), [this](PlayerInfo &player1, PlayerInfo &player2)
		{
			return distance(player1) < distance(player2);
		}
	);
}

bool PlayerInfo::operator==(const PlayerInfo & other) const
{
	return other.m_playerCode == m_playerCode && m_gameHash == other.m_gameHash ;
}

int PlayerInfo::distance(PlayerInfo & other)
{
	return playerPos.distance(other.playerPos);
}

std::string PlayerInfo::getGameHash()
{
	return m_gameHash;
}
GeoLocation PlayerInfo::getGeoLocation() 
{
	return playerPos;
}
sf::IpAddress PlayerInfo::getIpAddress()
{
	return userIp;
}
