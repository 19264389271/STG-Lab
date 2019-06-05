#include "stdafx.h"
#include "Map.h"


Map::Map()
	:m_data(11), m_borderX(10), m_borderY(10)
{
	m_data[ 1] = " ##########";
	m_data[ 2] = " #        #";
	m_data[ 3] = " #        #";
	m_data[ 4] = " #        #";
	m_data[ 5] = " #        #";
	m_data[ 6] = " #        #";
	m_data[ 7] = " #        #";
	m_data[ 8] = " #        #";
	m_data[ 9] = " #        #";
	m_data[10] = " ##########";
	passable['#'] = false;
	passable[' '] = true;
	passable['M'] = false;
	passable['@'] = false;
}

bool Map::isPassable(int x, int y)
{
	return passable[m_data[x][y]];
}

char Map::getBlock(int x, int y)
{
	return m_data[x][y];
}

int Map::getX()
{
	return m_borderX;
}

int Map::getY()
{
	return m_borderY;
}


Map::~Map()
{
}
