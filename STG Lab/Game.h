#pragma once
#include <iostream>
#include "Map.h"
#include "Scanner.h"
#include "Alive.h"
#include "Player.h"
#include <vector>

using std::cout;

class Game
{
public:
	Game();
	void run();
	void processInput();
	void update();
	void draw();
	~Game();
private:
	bool m_running;
	Player m_player;
	Map m_map;
	Scanner m_scanner;
	vector<Alive*> m_mobs;
};
