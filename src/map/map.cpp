// map/map.cpp - implementation file for map path
#include "map.h"
#include <string>
#include <ncurses.h>
#include <vector>

// Initialize the canvas with spaces
void initCanvas() { 

    for(int i = 0; i < CANVAS_HEIGHT; i++){
        
        for(int j = 0; j < CANVAS_WIDTH; j++){
            canvas[i][j] = ' ';
            colorMap[i][j] = 0;
        }
    }
}

