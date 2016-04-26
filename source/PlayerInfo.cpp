#include "stdafx.h"

#include "PlayerInfo.h"

PlayerInfo::PlayerInfo(std::string playerCode, std::string gameHash, GeoLocation playerPos, sf::IpAddress userIp) :
	m_playerCode(playerCode),
	m_gameHash(gameHash),
	playerPos(playerPos),
	userIp(userIp){}

std::string PlayerInfo::getPlayerCode() 
{
	return m_playerCode;
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