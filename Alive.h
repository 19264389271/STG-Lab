#include "Map.h"

class Alive
{
public:
	Alive();
	int getX();
	int getY();
	virtual void act();
	void move(int x, int y);
	~Alive();
protected:
	int m_x, m_y;
	Map* m_map;
};
