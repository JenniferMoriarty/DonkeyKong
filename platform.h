#pragma once
#include<allegro5\allegro.h>
#include<allegro5\allegro_image.h>
#include"GameObject.h"
class platform : public gameObject {

public:
	platform(int x, int y, ALLEGRO_BITMAP *img);
	void draw();
};

