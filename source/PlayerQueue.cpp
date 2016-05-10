#include "stdafx.h"
#include "PlayerQueue.h"

PlayerQueue::PlayerQueue() {}

PlayerInfo PlayerQueue::pop()
{
	std::lock_guard<std::mutex> lock(m_mutex);
	PlayerInfo playerInfo = m_players.front();
	m_players.pop();
	return playerInfo;
}


void PlayerQueue::push(PlayerInfo playerInfo)
{
	std::lock_guard<std::mutex> lock(m_mutex);
	m_players.push(playerInfo);
}

size_t PlayerQueue::length()
{
	std::lock_guard<std::mutex> lock(m_mutex);
	return m_players.size();
}