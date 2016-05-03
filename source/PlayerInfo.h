#pragma once
#include "stdafx.h"

#include <string>
#include <vector>

class PlayerInfo
{

public: 
	PlayerInfo(std::wstring playerCode, std::wstring gameHash);


public:
	std::wstring getPlayerCode();
	std::wstring getGameHash();

	void generateRankings(std::vector<PlayerInfo> players);

	bool operator==(const PlayerInfo &other) const;

	int distance()

private:
	std::wstring m_playerCode;
	// TODO IPV4/IPV6 struct from SFML stuff
	// GEO LOCATION DATA
	std::wstring m_gameHash;

	std::vector< PlayerInfo > m_rankings;
	PlayerInfo* m_match;
};