// main.cpp - main file for metro-de-madrid-CLI application

// include statements
#include <bits/stdc++.h>
#include <ncurses.h>
using namespace std;

//cbreak();               // Disable line buffering
//noecho();               // Don't echo user input
//keypad(stdscr, TRUE);   // Enable function keys and arrow keys
//curs_set(0); 

#define START_NCURSES initscr();
#define END_NCURSES getch(); endwin(); return 0;

void welcomeWindow(){

    // make getch() non-blocking and clear the screen
    nodelay(stdscr, TRUE);
    clear();

    while (1){
        
        // create a new window and border box with text
        WINDOW *welcomeWin = newwin(10, 50, 5, 5); // height, width, starty, startx
        box(welcomeWin, 0, 0);
        mvwprintw(welcomeWin, 2, 10, "Welcome to Metro de Madrid CLI!");
        mvwprintw(welcomeWin, 4, 10, "Press any key to continue...");
        wrefresh(welcomeWin);
        
        // await user input to start the CLI
        char ch = getch();
        if (ch != ERR){ 
            delwin(welcomeWin);
            clear();
            break;  
        }
    }
}

// main function
int main(void) {

    // initialize ncurses and display welcome window
    START_NCURSES
    welcomeWindow();

    // main loop
    while (1){

        mvwprintw(stdscr, 0, 0, "Main. Press 'q' to quit.");
        refresh();

        int ch = getch();
        if (ch == 'q' || ch == 'Q') {
            break; 
        }
    }

    END_NCURSES
}