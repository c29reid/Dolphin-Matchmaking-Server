#pragma once
#include "stdafx.h"

#include <string>
#include <vector>

#include "GeoLocation.h"
#include <SFML/Network/IpAddress.hpp>

class PlayerInfo
{

public: 
<<<<<<< HEAD
	PlayerInfo(std::string playerCode, std::string gameHash);
	
=======
	PlayerInfo(std::string playerCode, std::string gameHash, GeoLocation playerPos, sf::IpAddress userIp);

>>>>>>> 50e28c7aaf3019c50dcfcdb6517ee10479316bdc
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