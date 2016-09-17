#pragma once

#include "stdafx.h"
#include <mutex>
#include <string> 
#include <map>

class Config
{

public:

	static Config* Instance();
	~Config() {
		if (m_pInstance != NULL) {
			delete m_pInstance;
			m_pInstance = NULL;
		}
	}

	void printConfig();
	void readConfigFile();
	int getConfigValue(std::string key);
	void setConfigValue(std::string key, int newVal);

private:
	Config() {
		readConfigFile();
	}
	static Config* m_pInstance;
	std::mutex mtx;

	std::map<std::string, int> configMap;

};