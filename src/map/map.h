// map/map.h - header file for map path
#ifndef MAP_H
#define MAP_H

// create canvas for drawing map
const int CANVAS_HEIGHT = 80;
const int CANVAS_WIDTH = 150;
char canvas[CANVAS_HEIGHT][CANVAS_WIDTH];
int colorMap[CANVAS_HEIGHT][CANVAS_WIDTH];

// create station structure
struct Station {
    int x, y;
    std::string name;
    int line;
};

// function prototypes
void initCanvas(void);

#endif