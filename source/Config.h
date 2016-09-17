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

	static void printConfig();
	static void readConfigFile();
	static int getConfigValue(std::string key);
	static void setConfigValue(std::string key, int newVal);

private:
	Config() {}
	static Config* m_pInstance;
	static std::mutex mtx;

	static std::map<std::string, int> configMap;

};