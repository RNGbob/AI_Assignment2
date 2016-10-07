#pragma once

#include "GraphicsSystem.h"
#include "Game.h"
#include "KinematicUnit.h"


class Wall :public Trackable
{
public:
	Wall();
	Wall(Vector2D start, Vector2D end, float width);
	~Wall();

	bool checkCollision(KinematicUnit* unit);

	void draw();





private:
	Vector2D mStart;
	Vector2D mEnd;
	float mWidth;





};