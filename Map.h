#pragma once
#include <string>
#include <vector>
#include <map>

using std::string;
using std::vector;

class Map
{
public:
	Map();
	bool isPassable(int x, int y);
	char getBlock(int x, int y);
	int getX();
	int getY();
	~Map();
private:
	static map<char, bool> passable;
	int m_borderX, m_borderY;
	vector<string> m_data;
};

