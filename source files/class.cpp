#include <iostream>
#include "head.h"

//创建玩家基本位置以及移动
class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWaring = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if(m_LogLevel >= LogLevelError)
			std::cout << "[Error]:" << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWaring)
			std::cout << "[WARN]:" << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[Info]:" << message << std::endl;
	}
};
int main()
{
	Player playerP1;
	playerP1.x = 4;
	playerP1.y = 3;
	
	playerP1.speed = 2;
	playerP1.Move(1, -1);

	LOG(playerP1.x);
	LOG(playerP1.y);
	//

	Log log;
	log.SetLevel(log.LogLevelWaring);
	log.Error("Hello");
	log.Warn("Hello");
	log.Info("Hello");


	std::cin.get();
}

