#include"barrel.h"
#include"globals.h"


//constructor
barrel::barrel(int x, int y, ALLEGRO_BITMAP *img) {
	xPos = x;
	yPos = y;
	dir = RIGHT;
	isOnGround = false;
	angle = 0;
	pic = img;
	ID = BARREL;
}

//drawing function
void barrel::draw() {
	al_draw_rotated_bitmap(pic, 20, 20, xPos, yPos, (angle*3.14) / 180, NULL); //this function SPINS an image based on the angle parameter
}

void barrel::move(vector<gameObject*>stuff) {

	//spin the barrel (this impacts draw rotated bitmap)
	if (dir == RIGHT)
		angle += 5;
	else
		angle -= 5;
	if (angle > 360 || angle <-360)
		angle = 0;

	vector<gameObject *>::iterator iter; //make an iterator so we can walk through the vector of gameObjects
	int x;
	int y;
	isOnGround = false;

	for (iter = stuff.begin(); iter != stuff.end(); iter++) { //walk through all the items in our gameObject vector
		if ((*iter)->getID() == PLATFORM) { //only worry about colliding with platforms here!
			x = (*iter)->getX();
			y = (*iter)->getY();
			if ((xPos + BARREL_SIZE > x) &&
				(xPos < x + PLATFORM_WIDTH) &&
				(yPos + BARREL_SIZE > y) &&
				(yPos < y + PLATFORM_HEIGHT))
				isOnGround = true;
		}
	}
	//if in free fall, move down
	if (isOnGround == false)
		yPos += 2;
	else
		yPos -= 1;

	//if barrel hits left wall, turn right
	if (xPos < 0 && yPos < SCREEN_H - 100)
		dir = RIGHT;
	//if hit right wall, turn left
	if (xPos + 10 > SCREEN_H)
		dir = LEFT;

	//if dir is left, move left
	if (dir == LEFT)
		xPos -= 4;
	//if dir is right, move right
	if (dir == RIGHT)
		xPos += 4;

	//if you fall off the screen, reset your position to a random spot above the game screen
	if (yPos > SCREEN_H) {
		yPos = rand() % 500 - 1000;
		xPos = rand() % 500 - 1000;
	}

}
