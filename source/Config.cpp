#include "stdafx.h"

#include "Config.h"
#include "Logger.h"

#include <string>
#include <iostream>
#include <fstream>

Config* Config::m_pInstance = NULL; 

Config* Config::Instance()
{
  if (!m_pInstance)
   	m_pInstance = new Config;
	return m_pInstance;
}

void Config::printConfig()
{
   	for(auto const& x : Config::configMap)
   	{
    	Logger::logMessage("Config - " + x.first + ":" + std::to_string(x.second));
   	}
}

void Config::readConfigFile()
{
	std::ifstream infile("settings/config.conf");

	if(!infile)
	{
		Logger::logMessage("Unable to retrieve the config file.");
	}
	else
	{
		std::string key;
		int val;
		while (infile >> key >> val) 
		{
			Config::configMap[key] = val;
		}

		printConfig();

		infile.close();
	}
}

int Config::getConfigValue(std::string key)
{
	if(configMap.find(key) != configMap.end())
	{
		return configMap.at(key);
	}
	return -1;
}

void Config::setConfigValue(std::string key, int newVal)
{
	mtx.lock();
	configMap[key] = newVal;
	mtx.unlock();
}
