// main.cpp - main file for metro-de-madrid-CLI application

// include statements
#include <bits/stdc++.h>
#include <ncurses.h>
using namespace std;

// global variables

// main function
int main(void) {
    initscr();

    // creating a window h w y x
    WINDOW *win = newwin(10, 50, 1,10);
    refresh();

    // making box border with default border styles
    box(win, 0, 0);

    // window y x string
    mvwprintw(win, 0, 1, "Plano del Metro de Madrid");
    mvwprintw(win, 1, 1, "Hello");

    // refreshing the window
    wrefresh(win);

    getch();
    endwin();
    return 0;
}