#include "stdafx.h"

#include "PlayerInfo.h"

#include <algorithm>

PlayerInfo::PlayerInfo(std::string playerCode, std::string gameHash, GeoLocation playerPos, sf::IpAddress userIp) :
	m_playerCode(playerCode),
	m_gameHash(gameHash),
	playerPos(playerPos),
	userIp(userIp)
{}

std::string PlayerInfo::getPlayerCode() 
{
	return m_playerCode;
}


bool PlayerInfo::operator==(const PlayerInfo & other) const
{
	return other.m_playerCode == m_playerCode && m_gameHash == other.m_gameHash ;
}

double PlayerInfo::distance(PlayerInfo & other)
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
