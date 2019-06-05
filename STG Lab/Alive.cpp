#include "Alive.h"



Alive::Alive()
{
}

int Alive::getX()
{
	return m_x;
}

int Alive::getY()
{
	return m_y;
}

void Alive::act()
{
}

void Alive::move(int x, int y)
{
	m_x = x;
	m_y = y;
}

Alive::~Alive()
{
}
