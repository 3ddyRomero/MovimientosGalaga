#include <iostream>
#include <sys/time.h>
#include <time.h>
#include "nave.h"
#include "unistd.h"
#include <ncurses.h>

using namespace std;
int juego();

int main(){
	initscr();

	juego();
	endwin();
	
}

int juego(){
	bool cerrar = true;
	char tecla = ' ';
	//initscr();
	curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    int h, w, start_y, star_x;
    h = 30;
    w = 80;
    start_y = star_x = 0;

    init_pair(17, COLOR_BLACK, COLOR_WHITE);
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
    init_pair(12, COLOR_WHITE, COLOR_WHITE);
    init_pair(5, COLOR_BLUE, COLOR_BLUE);
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_CYAN, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_BLACK);
    init_pair(8, COLOR_WHITE, COLOR_BLACK);

	while(cerrar){
			nave n(35,58);
			n.pintar();
			n.borrar();
			//n.mover();	
			refresh();
			
		tecla = getch();
		if (tecla == 10){
			cerrar = false;
            clear();
            refresh();
		}else if (tecla == 'a'){
			n.moverI();
		}else if (tecla == 'd'){
			n.moverD();
		}

	}
	endwin();

	return 0;
}