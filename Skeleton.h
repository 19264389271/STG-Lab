#pragma once
#include "Alive.h"
#include <cstdlib>
#include <ctime>
class Skeleton :
	public Alive
{
public:
	Skeleton();
	virtual void act();
	~Skeleton();
};

