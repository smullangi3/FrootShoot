#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#define Gi (8) //inverse of G (1/G); use for mod operations

typedef struct fruit {
    int row;
    int col;
    int vel_y; //velocity in y direction
    int vel_x; //velocity in x direction
    int toRender;
} fruit;

typedef struct player {
    int row;
    int col;
    int speed;
    int score;
} player;

typedef struct shotMark {
    int row;
    int col;
} shotMark;

typedef struct fruitSplat {
    int row;
    int col;
} fruitSplat;

int collides(int r1, int c1, int w1, int h1, int r2, int c2, int w2, int h2);


#endif