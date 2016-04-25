#include "stdafx.h"

#include "PlayerInfo.h"

PlayerInfo::PlayerInfo(std::string playerCode, std::string gameHash) :
	m_playerCode(playerCode),
	m_gameHash(gameHash) {}

std::string PlayerInfo::getPlayerCode() 
{
	return m_playerCode;
}

std::string PlayerInfo::getGameHash()
{
	return m_gameHash;
}