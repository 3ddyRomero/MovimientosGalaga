#ifndef NAVE_H
#define NAVE_H
#include <ncurses.h>

class nave{
	private:
		int x,y;
	public:
		nave();
		nave(int,int);
		int pintar();
		int borrar();
		int moverI();
		int moverD();
};
#endif