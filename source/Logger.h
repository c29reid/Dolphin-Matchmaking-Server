#pragma once

#include "stdafx.h"
#include <mutex>
#include <string> 

class Logger
{

public:

	static Logger* Instance();
	~Logger() {
		if (m_pInstance != NULL) {
			delete m_pInstance;
			m_pInstance = NULL;
		}
	}

	bool openLogFile(std::string logFile);
	void writeToLogFile(); // TODO
	bool closeLogFile(); // TODO

	static void logMessage (std::string log);

private:
	Logger() {}
	static Logger* m_pInstance;

	static std::string getTimeStamp();
	static std::mutex mtx;

};