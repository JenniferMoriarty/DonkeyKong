#pragma once
#include<allegro5\allegro.h>
#include<allegro5\allegro_image.h>
#include<vector>
using namespace std; //needed for vectors!
#include"GameObject.h"

class barrel : public gameObject{
private:
	int dir;
	int angle;

public:
	barrel(int x, int y, ALLEGRO_BITMAP *img);
	void draw();
	void move(vector<gameObject*>stuff);


};

