#pragma once
#include "stdafx.h"

#include <string>

class PlayerInfo
{

public: 
	PlayerInfo(std::string playerCode, std::string gameHash);
	
	std::string getPlayerCode();
	std::string getGameHash();

private:
	std::string m_playerCode;
	// TODO IPV4/IPV6 struct from SFML stuff
	// GEO LOCATION DATA
	std::string m_gameHash;

};