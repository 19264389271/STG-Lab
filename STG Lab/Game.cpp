#include "stdafx.h"
#include "Game.h"


Game::Game()
	:m_running(false)
{
	
}

void Game::run()
{
	m_running = true;
	while (m_running)
	{
		processInput();
		update();
		draw();
	}
}

void Game::processInput()
{
	int x = m_player.getX(), y = m_player.getY();
	switch (m_scanner.getInput())
	{
	case 0:
		return;
	case 'w':
		--x;
		break;
	case 'a':
		--y;
		break;
	case 's':
		++x;
		break;
	case 'd':
		++y;
		break;
	default:
		;
	}
	if (m_map.isPassable(x, y))
		m_player.move(x, y);
}

void Game::update()
{
	for (Alive* i : m_mobs)
		i->act();
}

void Game::draw()
{
	bool print;
	for (int x = 1, y; x <= m_map.getX(); ++x)
	{
		for (y = 1, print = false; y <= m_map.getY(); ++y, print = false)
		{
			if (x == m_player.getX() && y == m_player.getY())
			{
				cout << '@';
				continue;
			}
			for (Alive* i : m_mobs)
				if (x == i->getX() && y == i->getY())
				{
					cout << 'M';
					print = true;
					break;
				}
			if (print)
				continue;
			cout << m_map.getBlock(x, y);
		}
		cout << endl;
	}
}

Game::~Game()
{
}
