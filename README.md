# metro-de-madrid-CLI

A terminal app that draws a live-ish map of the Madrid Metro.

## The idea

Wanted to keep up with my C/C++ skills while I work in web development.

Madrid's metro map, rendered with Unicode in the terminal. Trains move between stations based on the data we scrape from the metro's
website.

Since Metro de Madrid doesn't have a public API, the plan is to scrape what we can and simulate the rest from published timetables. The metro closes overnight (~1:30am–6:00am CET), so data stops in EST early.

## Dependencies

- libcurl — HTTP
- ncurses  — terminal rendering
- C++17 standard library

## Building

```
cmake -B build
cmake --build build
```

## Project structure

```
src/
  main.cpp
  scraper/       — fetching and parsing schedule data
  map/           — map layout and terminal rendering
  simulation/    — train position interpolation, animation loop
  data/          — cached schedules, station coordinates
```