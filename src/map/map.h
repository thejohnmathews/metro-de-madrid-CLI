// map/map.h - header file for map pathfuncionality

// include statements
#include <string>
#include <ncurses.h>
#include <vector>

#ifndef MAP_H
#define MAP_H

const int CANVAS_HEIGHT = 80;
const int CANVAS_WIDTH = 150;

// station struct
struct Station {
    int x, y;
    std::string name;
    int line;
};

// Going to make a generic map class in case I want to add more cities in the future.
class Map {

    private:

        std::string cityName;
        std::string country;
        int numLines;
        int numStations;
        char canvas[CANVAS_HEIGHT][CANVAS_WIDTH];
        int colorMap[CANVAS_HEIGHT][CANVAS_WIDTH];

    public:

        // constructors (default/parameterized) & destructor
        Map () : cityName (""), country (""), numLines (0), numStations (0) {;}
        Map (std::string n, std::string c, int l, int stations) : cityName(n), country(c), numLines(l), numStations(stations) {;}
        ~Map () {;}

        // getters
        std::string getCityName() const { return cityName; }
        std::string getCountry() const { return country; }
        int getNumLines() const { return numLines; }
        int getNumStations() const { return numStations; }

        // setters
        void setCityName(std::string n) { cityName = n; }
        void setCountry(std::string c) { country = c; }
        void setNumLines(int l) { numLines = l; }
        void setNumStations(int s) { numStations = s; }
};

class Madrid: public Map {

    private:

        std::vector<Station> stationNames;

    public:

        // constructors (default/parameterized) & destructor
        Madrid () : Map ("Metro de Madrid", "Spain", 13, 302) {;}
        Madrid (std::vector<Station> s) : Map ("Metro de Madrid", "Spain", 13, 302), stationNames(s) {;}
        ~Madrid () {;}

        // getters
        std::vector<Station> getStationNames() const { return stationNames; }

        // setters
        void setStationNames(std::vector<Station> s) { stationNames = s; }
};

// create canvas for drawing map (extern declarations - defined in map.cpp)
extern char canvas[CANVAS_HEIGHT][CANVAS_WIDTH];
extern int colorMap[CANVAS_HEIGHT][CANVAS_WIDTH];

// function prototypes
void initCanvas(void);

#endif