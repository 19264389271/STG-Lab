#include "stdafx.h"
#include "Scanner.h"


Scanner::Scanner()
	:m_read(scan)
{
	m_read.detach();
}

void Scanner::scan()
{
	while (this)
	{
		m_data = _getch();
		m_got = false;
	}
}

int Scanner::getInput()
{
	if (!m_got)
	{
		m_got = true;
		return m_data;
	}
	else
		return 0;
}


Scanner::~Scanner()
{
}
