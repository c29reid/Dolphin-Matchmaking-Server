#pragma once
#include "stdafx.h"

#include <string>
#include <vector>

#include "GeoLocation.h"
#include <SFML/Network/IPAddress.hpp>

class PlayerInfo
{

public: 
	PlayerInfo(std::string playerCode, std::string gameHash, GeoLocation playerPos, sf::IpAddress userIp);

	std::string getPlayerCode();
	std::string getGameHash();
	GeoLocation getGeoLocation();
	sf::IpAddress getIpAddress();

	bool operator==(const PlayerInfo &other) const;

	double distance(PlayerInfo& other);

private:
	std::string m_playerCode;
	std::string m_gameHash;
	GeoLocation playerPos;
	sf::IpAddress userIp;
	
};
