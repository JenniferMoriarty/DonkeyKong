#include"platform.h"
#include"globals.h"

platform::platform(int x, int y, ALLEGRO_BITMAP *img) {
	xPos = x;
	yPos = y;
	pic = img;
	ID = PLATFORM;
}
void platform::draw() {
	al_draw_bitmap(pic, xPos, yPos, NULL);
}



