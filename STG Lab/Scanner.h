#pragma once
#include <thread>
#include <conio.h>

using std::thread;

class Scanner
{
public:
	Scanner();
	int getInput();
	~Scanner();
private:
	void scan();
	thread m_read;
	bool m_got;
	int m_data;
};
