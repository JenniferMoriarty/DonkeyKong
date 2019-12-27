#pragma once
//constants: variables that shouldn't change once the game starts
const float FPS = 60;
const int SCREEN_W = 800;
const int SCREEN_H = 800;
const int BARREL_SIZE = 20;
const int PLATFORM_WIDTH = 80;
const int PLATFORM_HEIGHT = 30;

//enumerations to help you remember what numbers represent which directions
enum MYKEYS { KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT };
enum DIRECTIONS { UP, DOWN, LEFT, RIGHT };
enum ITEM_IDS{ BARREL, PLATFORM, PLAYER };

