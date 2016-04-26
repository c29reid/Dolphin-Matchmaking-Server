#pragma once
#include "stdafx.h"

#include <string>

#include "GeoLocation.h"
#include <SFML/Network/IpAddress.hpp>

class PlayerInfo
{

public: 
	PlayerInfo(std::string playerCode, std::string gameHash, GeoLocation playerPos, sf::IpAddress userIp);

	std::string getPlayerCode();
	std::string getGameHash();
	GeoLocation getGeoLocation();
	sf::IpAddress getIpAddress();

private:
	std::string m_playerCode;
	std::string m_gameHash;
	GeoLocation playerPos;
	sf::IpAddress userIp;

};