#pragma once
#include<allegro5\allegro.h>
#include<allegro5\allegro_image.h>
#include<vector>
using namespace std;

class gameObject {
private: //only gameObject objects can access these

protected: //only child classes can access these
	int xPos;
	int yPos;
	int ID;
	bool isOnGround;
	ALLEGRO_BITMAP *pic;

public: //all parts of your program can access these
	//regular functions
	int getX();
	int getY();
	int getID();

	//virtual functions
	virtual void move(vector<gameObject*>stuff);
	virtual void draw();
};

