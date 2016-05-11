#pragma once

#include "stdafx.h"
#include <mutex>
#include <string> 

class Logger
{

public:

	static void logMessage (std::string log);

private:
	static std::mutex mtx;

};