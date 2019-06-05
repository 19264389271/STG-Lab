#include "stdafx.h"
#include "Skeleton.h"


Skeleton::Skeleton()
{
}

void Skeleton::act()
{
	int x = m_x, y = m_y;
	srand(time(NULL));
	if (rand() % 2)
		++x;
	else
		--x;
	if (rand() % 2)
		++y;
	else
		--y;
}


Skeleton::~Skeleton()
{
}
