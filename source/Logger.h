#pragma once

#include "stdafx.h"
#include <mutex>
#include <string> 

class Logger
{

public:

	static Logger* Instance();
	bool openLogFile(std::string logFile);
	void writeToLogFile();
	bool closeLogFile();

	static void logMessage (std::string log);

private:

	static std::string getTimeStamp();

	static std::mutex mtx;

	Logger(){};
	Logger(Logger const&){};
	Logger& operator=(Logger const&){};
	static Logger* m_pInstance;

};