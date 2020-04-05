#include <iostream>
#include "Log.h"

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:		// class member m_LogLevel, to not take local function variables by mistake as class members
	int m_LogLevel = LogLevelInfo; //set loglevel to info by default
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
		std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
		std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
		std::cout << "[INFO]: " << message << std::endl;
	}
};

int main(void)
{
	Log log;
	//log.SetLevel(log.LogLevelWarning); //loglevelwarning set, so no logs about infos
	log.SetLevel(log.LogLevelError); //only level error logs, so no warnings and infos
	log.Warn("Hello!");
	log.Error("Hello!");
	log.Info("Hello!");
	std::cin.get();
}