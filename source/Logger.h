#pragma once

#include "stdafx.h"
#include <mutex>
#include <string> 

class Logger
{

public:

	void logMessage (std::string log);

private:
	std::mutex mtd;

};