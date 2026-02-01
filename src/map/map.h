// map/map.h - header file for map pathfuncionality

// include statements
#include <string>
#include <ncurses.h>
#include <vector>

#ifndef MAP_H
#define MAP_H

const int CANVAS_HEIGHT = 80;
const int CANVAS_WIDTH = 150;

class Map {

    private:

        string name;
        string country;
        char numLines;
        char numStations;
        char canvas[CANVAS_HEIGHT][CANVAS_WIDTH];
        int colorMap[CANVAS_HEIGHT][CANVAS_WIDTH];

    public:

        // constructors (default/parameterized) & destructor
        Map () : name (""), country (""), numLines (0), numStations (0) {;}
        Map (string n, string c, char l, char stations) : name(n), country(c), numLines(l), numStations(stations) {;}
        ~Map () {;}

        // getters 
        string getName() const return name; 
        string getCountry() const return country;
        char getNumLines() const return numLines;
        char getNumStations() const return numStations;

        // setters
        void setName(string n) name = n;
        void setCountry(string c) country = c;
        void setNumLines(char l) numLines = l;
        void setNumStations(char s) numStations = s;

};

class Madrid: public Map {

    private:

        std::vector<Station> stations;
    
    public:

        // constructors (default/parameterized) & destructor
        Madrid () : Map ("Metro de Madrid", "Spain", 13, 302) {;}
        Madrid (std::vector<Station> s) : Map ("Metro de Madrid", "Spain", 13, 302), stations(s) {;}
        ~Madrid () {;}

        // getters 
        std::vector<Station> getStations() const return stations; 

        // setters
        void setStations(std::vector<Station> s) stations = s;
}

// create canvas for drawing map
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