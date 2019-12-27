#pragma once
#include "GameObject.h"


//virtual functions
void gameObject::move(vector<gameObject*>stuff) {}
void gameObject::draw() {}

//regular functions
int gameObject::getX() { return xPos; }
int gameObject::getY() { return yPos; }
int gameObject::getID() { return ID; }

