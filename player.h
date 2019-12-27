#pragma once
#include"globals.h"
#include"GameObject.h"

class player : public gameObject {
private:
	double xVel;
	double yVel;
	bool CanJump;

public:
	player();
	void move(vector<gameObject*>stuff);
	void moveLeft();
	void moveRight();
	void Jump();
	void draw();
	int VerticalCollision(int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2, int ydir);

};

