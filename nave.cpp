#include "nave.h"
#include <ncurses.h>


nave::nave(int tx,int ty){
	x=tx;
	y=ty;
}

int nave::pintar(){

	start_color();
	curs_set(0);
    noecho();
    keypad(stdscr, TRUE);
    init_pair(17, COLOR_BLACK, COLOR_WHITE);
    
    init_pair(12, COLOR_WHITE, COLOR_WHITE);
    init_pair(5, COLOR_BLUE, COLOR_BLUE);
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_BLUE, COLOR_BLACK);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_CYAN, COLOR_CYAN);
    init_pair(7, COLOR_BLACK, COLOR_BLACK);
    init_pair(8, COLOR_WHITE, COLOR_BLACK);
	attron(COLOR_PAIR(12));
        mvprintw(x, y, " ");
        mvprintw(x - 1, y, " ");
        mvprintw(x - 1, y + 1, " ");
        mvprintw(x - 2, y, " ");
        mvprintw(x - 2, y + 1, " ");
        mvprintw(x - 2, y + 2, " ");
        mvprintw(x - 3, y, " ");
        mvprintw(x - 2, y + 2, " ");
        mvprintw(x - 2, y + 3, " ");
        mvprintw(x - 2, y + 4, " ");
        mvprintw(x - 2, y + 5, " ");
        mvprintw(x - 2, y + 6, " ");
        mvprintw(x - 2, y + 7, " ");
        mvprintw(x - 2, y + 8, " ");
        mvprintw(x - 2, y + 9, " ");
        mvprintw(x - 2, y + 10, " ");
        mvprintw(x - 2, y + 11, " ");
        mvprintw(x - 3, y + 3, " ");
        mvprintw(x - 3, y + 4, " ");
        mvprintw(x - 3, y + 5, " ");
        mvprintw(x - 3, y + 6, " ");
        mvprintw(x - 3, y + 7, " ");
        mvprintw(x - 3, y + 8, " ");
        mvprintw(x - 4, y + 5, " ");
        mvprintw(x - 4, y + 6, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 5, " ");
        mvprintw(x - 1, y + 6, " ");

        //por izquierda
        mvprintw(x, y + 11, " ");
        mvprintw(x - 1, y + 10, " ");
        mvprintw(x - 1, y + 11, " ");
        mvprintw(x - 3, y + 11, " ");

        attroff(COLOR_PAIR(12));
        // desactiva el color

        //activa color ROJO para las zonas de ese color
        attron(COLOR_PAIR(3));
        mvprintw(x - 4, y, " ");
        mvprintw(x - 4, y + 11, " ");
        mvprintw(x - 5, y + 5, " ");
        mvprintw(x - 5, y + 6, " ");
        mvprintw(x - 1, y + 4, " ");
        mvprintw(x - 1, y + 7, " ");
        attroff(COLOR_PAIR(3));
        //desactiva el color

        //activa el color AZUL para las zonas de ese color
        attron(COLOR_PAIR(5));
        mvprintw(x, y + 5, " ");
        mvprintw(x, y + 6, " ");
        attroff(COLOR_PAIR(5));
        //desactiva el color
}

int nave::borrar(){
	//initscr();
    start_color();
	int tx;
	int ty;
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
	attron(COLOR_PAIR(9));
            mvprintw(tx, ty, " ");
            mvprintw(tx - 1, ty, " ");
            mvprintw(tx - 1, ty + 1, " ");
            mvprintw(tx - 2, ty, " ");
            mvprintw(tx - 2, ty + 1, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 3, ty, " ");
            mvprintw(tx - 2, ty + 2, " ");
            mvprintw(tx - 2, ty + 3, " ");
            mvprintw(tx - 2, ty + 4, " ");
            mvprintw(tx - 2, ty + 5, " ");
            mvprintw(tx - 2, ty + 6, " ");
            mvprintw(tx - 2, ty + 7, " ");
            mvprintw(tx - 2, ty + 8, " ");
            mvprintw(tx - 2, ty + 9, " ");
            mvprintw(tx - 2, ty + 10, " ");
            mvprintw(tx - 2, ty + 11, " ");
            mvprintw(tx - 3, ty + 3, " ");
            mvprintw(tx - 3, ty + 4, " ");
            mvprintw(tx - 3, ty + 5, " ");
            mvprintw(tx - 3, ty + 6, " ");
            mvprintw(tx - 3, ty + 7, " ");
            mvprintw(tx - 3, ty + 8, " ");
            mvprintw(tx - 4, ty + 5, " ");
            mvprintw(tx - 4, ty + 6, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 5, " ");
            mvprintw(tx - 1, ty + 6, " ");
            refresh();

            //por izquierda
            mvprintw(tx, ty + 11, " ");
            mvprintw(tx - 1, ty + 10, " ");
            mvprintw(tx - 1, ty + 11, " ");
            mvprintw(tx - 3, ty + 11, " ");
            refresh();
            //attroff(COLOR_PAIR(12));
            // desactiva el color

            //activa color ROJO para las zonas de ese color
            //attron(COLOR_PAIR(3));
            mvprintw(tx - 4, ty, " ");
            mvprintw(tx - 4, ty + 11, " ");
            mvprintw(tx - 5, ty + 5, " ");
            mvprintw(tx - 5, ty + 6, " ");
            mvprintw(tx - 1, ty + 4, " ");
            mvprintw(tx - 1, ty + 7, " ");
            refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvprintw(tx, ty + 5, " ");
            mvprintw(tx, ty + 6, " ");
    attroff(COLOR_PAIR(9));
            refresh();
            return 0;
}

int nave::moverI(){
	    char teci = getch();
	    	
	    if(teci == 'd'&& y <= 120) y++;
	    
	    pintar();
	
    return 0;
}

int nave::moverD(){
    char tecd = getch();
    
    if(getch() == 'a') y--;
        pintar();
        
        return 0;
}