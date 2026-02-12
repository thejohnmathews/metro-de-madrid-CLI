// map/map.cpp - implementation file for map path

// include statements
#include "map.h"

// define gloval canvas and colormap
char canvas[CANVAS_HEIGHT][CANVAS_WIDTH];
int colorMap[CANVAS_HEIGHT][CANVAS_WIDTH];

// Initialize the canvas with spaces
void initCanvas() { 

    for(int i = 0; i < CANVAS_HEIGHT; i++){

        for(int j = 0; j < CANVAS_WIDTH; j++){
            canvas[i][j] = ' ';
            colorMap[i][j] = 0;
        }
    }
}

