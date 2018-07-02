#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include "unistd.h"
#ifdef USE_PTHREADS
#include <pthread.h>
#endif
#include <pthread.h>
WINDOW* mainwindow;



pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

static int invasionacb(WINDOW *win, void* data){
    int a=1, b=1;
    bool muevan = true;
    bool muevana = true;
    bool muevanb = true;;
    bool muevanc = true;
    bool muevand = true;
    bool muevane = true;
    
    init_pair(23, COLOR_RED, COLOR_GREEN);
    init_pair(15,COLOR_BLACK,COLOR_BLACK);

    while (muevan){
        int ta = a;
        int tb = b;
                
        for(int i=tb;i<=76;i++){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a,i,"\\");
                mvwprintw(win,a+1,i+1,"\\");
                mvwprintw(win,a+2,i+2,"*");
                mvwprintw(win,a+2,i+1,"-");
                mvwprintw(win,a+2,i+3,"-");
                mvwprintw(win,a+1,i+3,"/");
                mvwprintw(win,a,i+4,"/");
             
                mvwprintw(win,a,i+8,"\\");
                mvwprintw(win,a+1,i+9,"\\");
                mvwprintw(win,a+2,i+10,"*");
                mvwprintw(win,a+2,i+9,"-");
                mvwprintw(win,a+2,i+11,"-");
                mvwprintw(win,a+1,i+11,"/");
                mvwprintw(win,a,i+12,"/");
                
                mvwprintw(win,a,i+16,"\\");
                mvwprintw(win,a+1,i+17,"\\");
                mvwprintw(win,a+2,i+18,"*");
                mvwprintw(win,a+2,i+17,"-");
                mvwprintw(win,a+2,i+19,"-");
                mvwprintw(win,a+1,i+19,"/");
                mvwprintw(win,a,i+20,"/");
                
                mvwprintw(win,a,i+24,"\\");
                mvwprintw(win,a+1,i+25,"\\");
                mvwprintw(win,a+2,i+26,"*");
                mvwprintw(win,a+2,i+25,"-");
                mvwprintw(win,a+2,i+27,"-");
                mvwprintw(win,a+1,i+27,"/");
                mvwprintw(win,a,i+28,"/");
                
                mvwprintw(win,a,i+32,"\\");
                mvwprintw(win,a+1,i+33,"\\");
                mvwprintw(win,a+2,i+34,"*");
                mvwprintw(win,a+2,i+33,"-");
                mvwprintw(win,a+2,i+35,"-");
                mvwprintw(win,a+1,i+35,"/");
                mvwprintw(win,a,i+36,"/");
                
                mvwprintw(win,a,i+40,"\\");
                mvwprintw(win,a+1,i+41,"\\");
                mvwprintw(win,a+2,i+42,"*");
                mvwprintw(win,a+2,i+41,"-");
                mvwprintw(win,a+2,i+43,"-");
                mvwprintw(win,a+1,i+43,"/");
                mvwprintw(win,a,i+44,"/");
              
                mvwprintw(win,a,i+48,"\\");
                mvwprintw(win,a+1,i+49,"\\");
                mvwprintw(win,a+2,i+50,"*");
                mvwprintw(win,a+2,i+49,"-");
                mvwprintw(win,a+2,i+51,"-");
                mvwprintw(win,a+1,i+51,"/");
                mvwprintw(win,a,i+52,"/");
                refresh();
           // pthread_mutex_unlock(&mutex1);


           // pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
                mvwprintw(win,a,i+1,"\\");
                mvwprintw(win,a+1,i+2,"\\");
                mvwprintw(win,a+2,i+3,"*");
                mvwprintw(win,a+2,i+2,"-");
                mvwprintw(win,a+2,i+4,"-");
                mvwprintw(win,a+1,i+4,"/");
                mvwprintw(win,a,i+5,"/");
            
                mvwprintw(win,a,i+9,"\\");
                mvwprintw(win,a+1,i+10,"\\");
                mvwprintw(win,a+2,i+11,"*");
                mvwprintw(win,a+2,i+10,"-");
                mvwprintw(win,a+2,i+12,"-");
                mvwprintw(win,a+1,i+12,"/");
                mvwprintw(win,a,i+13,"/");
            
                mvwprintw(win,a,i+17,"\\");
                mvwprintw(win,a+1,i+18,"\\");
                mvwprintw(win,a+2,i+19,"*");
                mvwprintw(win,a+2,i+18,"-");
                mvwprintw(win,a+2,i+20,"-");
                mvwprintw(win,a+1,i+20,"/");
                mvwprintw(win,a,i+21,"/");
            
                mvwprintw(win,a,i+25,"\\");
                mvwprintw(win,a+1,i+26,"\\");
                mvwprintw(win,a+2,i+27,"*");
                mvwprintw(win,a+2,i+26,"-");
                mvwprintw(win,a+2,i+28,"-");
                mvwprintw(win,a+1,i+28,"/");
                mvwprintw(win,a,i+29,"/");
                
                mvwprintw(win,a,i+33,"\\");
                mvwprintw(win,a+1,i+34,"\\");
                mvwprintw(win,a+2,i+35,"*");
                mvwprintw(win,a+2,i+34,"-");
                mvwprintw(win,a+2,i+36,"-");
                mvwprintw(win,a+1,i+36,"/");
                mvwprintw(win,a,i+37,"/"); 
                
                mvwprintw(win,a,i+41,"\\");
                mvwprintw(win,a+1,i+42,"\\");
                mvwprintw(win,a+2,i+43,"*");
                mvwprintw(win,a+2,i+42,"-");
                mvwprintw(win,a+2,i+44,"-");
                mvwprintw(win,a+1,i+44,"/");
                mvwprintw(win,a,i+45,"/");
                
                mvwprintw(win,a,i+49,"\\");
                mvwprintw(win,a+1,i+50,"\\");
                mvwprintw(win,a+2,i+51,"*");
                mvwprintw(win,a+2,i+50,"-");
                mvwprintw(win,a+2,i+52,"-");
                mvwprintw(win,a+1,i+52,"/");
                mvwprintw(win,a,i+53,"/");
                //refresh();
                pthread_mutex_unlock(&mutex1);


                //tb++;

                usleep(70000);
                refresh();
                if (i == 76){
                    muevan = false;            
                }
                
            }
    }
    while(muevana){
        int a=-3, b=129;
        int ta = a;
        int tb = b;

         for(int i=tb;i>=53;i--){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a+7,i,"\\");
                mvwprintw(win,a+8,i-1,"\\");
                mvwprintw(win,a+9,i-2,"*");
                mvwprintw(win,a+9,i-1,"-");
                mvwprintw(win,a+9,i-3,"-");
                mvwprintw(win,a+8,i-3,"/");
                mvwprintw(win,a+7,i-4,"/");
                
                mvwprintw(win,a+7,i-8,"\\");
                mvwprintw(win,a+8,i-9,"\\");
                mvwprintw(win,a+9,i-10,"*");
                mvwprintw(win,a+9,i-9,"-");
                mvwprintw(win,a+9,i-11,"-");
                mvwprintw(win,a+8,i-11,"/");
                mvwprintw(win,a+7,i-12,"/");
                
                mvwprintw(win,a+7,i-16,"\\");
                mvwprintw(win,a+8,i-17,"\\");
                mvwprintw(win,a+9,i-18,"*");
                mvwprintw(win,a+9,i-17,"-");
                mvwprintw(win,a+9,i-19,"-");
                mvwprintw(win,a+8,i-19,"/");
                mvwprintw(win,a+7,i-20,"/");
                
                mvwprintw(win,a+7,i-24,"\\");
                mvwprintw(win,a+8,i-25,"\\");
                mvwprintw(win,a+9,i-26,"*");
                mvwprintw(win,a+9,i-25,"-");
                mvwprintw(win,a+9,i-27,"-");
                mvwprintw(win,a+8,i-27,"/");
                mvwprintw(win,a+7,i-28,"/");
                
                mvwprintw(win,a+7,i-32,"\\");
                mvwprintw(win,a+8,i-33,"\\");
                mvwprintw(win,a+9,i-34,"*");
                mvwprintw(win,a+9,i-33,"-");
                mvwprintw(win,a+9,i-35,"-");
                mvwprintw(win,a+8,i-35,"/");
                mvwprintw(win,a+7,i-36,"/");
                
                mvwprintw(win,a+7,i-40,"\\");
                mvwprintw(win,a+8,i-41,"\\");
                mvwprintw(win,a+9,i-42,"*");
                mvwprintw(win,a+9,i-41,"-");
                mvwprintw(win,a+9,i-43,"-");
                mvwprintw(win,a+8,i-43,"/");
                mvwprintw(win,a+7,i-44,"/");
              
                mvwprintw(win,a+7,i-48,"\\");
                mvwprintw(win,a+8,i-49,"\\");
                mvwprintw(win,a+9,i-50,"*");
                mvwprintw(win,a+9,i-49,"-");
                mvwprintw(win,a+9,i-51,"-");
                mvwprintw(win,a+8,i-51,"/");
                mvwprintw(win,a+7,i-52,"/");
                //refresh();
              //  pthread_mutex_unlock(&mutex1);
                
            //pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
            mvwprintw(win,a+7,i-1,"\\");
                mvwprintw(win,a+8,i-2,"\\");
                mvwprintw(win,a+9,i-3,"*");
                mvwprintw(win,a+9,i-2,"-");
                mvwprintw(win,a+9,i-4,"-");
                mvwprintw(win,a+8,i-4,"/");
                mvwprintw(win,a+7,i-5,"/");
                 
                mvwprintw(win,a+7,i-9,"\\");
                mvwprintw(win,a+8,i-10,"\\");
                mvwprintw(win,a+9,i-11,"*");
                mvwprintw(win,a+9,i-10,"-");
                mvwprintw(win,a+9,i-12,"-");
                mvwprintw(win,a+8,i-12,"/");
                mvwprintw(win,a+7,i-13,"/");
                
                mvwprintw(win,a+7,i-17,"\\");
                mvwprintw(win,a+8,i-18,"\\");
                mvwprintw(win,a+9,i-19,"*");
                mvwprintw(win,a+9,i-18,"-");
                mvwprintw(win,a+9,i-20,"-");
                mvwprintw(win,a+8,i-20,"/");
                mvwprintw(win,a+7,i-21,"/");
                
                mvwprintw(win,a+7,i-25,"\\");
                mvwprintw(win,a+8,i-26,"\\");
                mvwprintw(win,a+9,i-27,"*");
                mvwprintw(win,a+9,i-26,"-");
                mvwprintw(win,a+9,i-28,"-");
                mvwprintw(win,a+8,i-28,"/");
                mvwprintw(win,a+7,i-29,"/");
                
                mvwprintw(win,a+7,i-33,"\\");
                mvwprintw(win,a+8,i-34,"\\");
                mvwprintw(win,a+9,i-35,"*");
                mvwprintw(win,a+9,i-34,"-");
                mvwprintw(win,a+9,i-36,"-");
                mvwprintw(win,a+8,i-36,"/");
                mvwprintw(win,a+7,i-37,"/");
                
                mvwprintw(win,a+7,i-41,"\\");
                mvwprintw(win,a+8,i-42,"\\");
                mvwprintw(win,a+9,i-43,"*");
                mvwprintw(win,a+9,i-42,"-");
                mvwprintw(win,a+9,i-44,"-");
                mvwprintw(win,a+8,i-44,"/");
                mvwprintw(win,a+7,i-45,"/");
              
                mvwprintw(win,a+7,i-49,"\\");
                mvwprintw(win,a+8,i-50,"\\");
                mvwprintw(win,a+9,i-51,"*");
                mvwprintw(win,a+9,i-50,"-");
                mvwprintw(win,a+9,i-52,"-");
                mvwprintw(win,a+8,i-52,"/");
                mvwprintw(win,a+7,i-53,"/");
                //refresh();
                pthread_mutex_unlock(&mutex1);

                //tb++;
                usleep(70000);
                refresh();

                if (i == 76){
                    muevana = false;            
                }
            }
    }
    while(muevan){
        int a=-3, b=129;
        int ta = a;
        int tb = b;

    }
}

void *invasion(void *args){
    use_window(mainwindow, invasionacb, NULL);
    //initscr();
    
} 

static int invasioncbb(WINDOW *win, void* data){
    int a=1, b=129;
    bool muevan = true;
    
    init_pair(23, COLOR_RED, COLOR_GREEN);
    init_pair(15,COLOR_BLACK,COLOR_BLACK);

        int ta = a;
        int tb = b;
    while (muevan){
        
                
        for(int i=tb;i>=53;i--){
            //fflush(stdout);
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(15));
                mvwprintw(win,a+7,i,"\\");
                mvwprintw(win,a+8,i-1,"\\");
                mvwprintw(win,a+9,i-2,"*");
                mvwprintw(win,a+9,i-1,"-");
                mvwprintw(win,a+9,i-3,"-");
                mvwprintw(win,a+8,i-3,"/");
                mvwprintw(win,a+7,i-4,"/");
                
                mvwprintw(win,a+7,i-8,"\\");
                mvwprintw(win,a+8,i-9,"\\");
                mvwprintw(win,a+9,i-10,"*");
                mvwprintw(win,a+9,i-9,"-");
                mvwprintw(win,a+9,i-11,"-");
                mvwprintw(win,a+8,i-11,"/");
                mvwprintw(win,a+7,i-12,"/");
                
                mvwprintw(win,a+7,i-16,"\\");
                mvwprintw(win,a+8,i-17,"\\");
                mvwprintw(win,a+9,i-18,"*");
                mvwprintw(win,a+9,i-17,"-");
                mvwprintw(win,a+9,i-19,"-");
                mvwprintw(win,a+8,i-19,"/");
                mvwprintw(win,a+7,i-20,"/");
                
                mvwprintw(win,a+7,i-24,"\\");
                mvwprintw(win,a+8,i-25,"\\");
                mvwprintw(win,a+9,i-26,"*");
                mvwprintw(win,a+9,i-25,"-");
                mvwprintw(win,a+9,i-27,"-");
                mvwprintw(win,a+8,i-27,"/");
                mvwprintw(win,a+7,i-28,"/");
                
                mvwprintw(win,a+7,i-32,"\\");
                mvwprintw(win,a+8,i-33,"\\");
                mvwprintw(win,a+9,i-34,"*");
                mvwprintw(win,a+9,i-33,"-");
                mvwprintw(win,a+9,i-35,"-");
                mvwprintw(win,a+8,i-35,"/");
                mvwprintw(win,a+7,i-36,"/");
                
                mvwprintw(win,a+7,i-40,"\\");
                mvwprintw(win,a+8,i-41,"\\");
                mvwprintw(win,a+9,i-42,"*");
                mvwprintw(win,a+9,i-41,"-");
                mvwprintw(win,a+9,i-43,"-");
                mvwprintw(win,a+8,i-43,"/");
                mvwprintw(win,a+7,i-44,"/");
              
                mvwprintw(win,a+7,i-48,"\\");
                mvwprintw(win,a+8,i-49,"\\");
                mvwprintw(win,a+9,i-50,"*");
                mvwprintw(win,a+9,i-49,"-");
                mvwprintw(win,a+9,i-51,"-");
                mvwprintw(win,a+8,i-51,"/");
                mvwprintw(win,a+7,i-52,"/");
                //refresh();
              //  pthread_mutex_unlock(&mutex1);
                
            //pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(23));
            mvwprintw(win,a+7,i-1,"\\");
                mvwprintw(win,a+8,i-2,"\\");
                mvwprintw(win,a+9,i-3,"*");
                mvwprintw(win,a+9,i-2,"-");
                mvwprintw(win,a+9,i-4,"-");
                mvwprintw(win,a+8,i-4,"/");
                mvwprintw(win,a+7,i-5,"/");
                 
                mvwprintw(win,a+7,i-9,"\\");
                mvwprintw(win,a+8,i-10,"\\");
                mvwprintw(win,a+9,i-11,"*");
                mvwprintw(win,a+9,i-10,"-");
                mvwprintw(win,a+9,i-12,"-");
                mvwprintw(win,a+8,i-12,"/");
                mvwprintw(win,a+7,i-13,"/");
                
                mvwprintw(win,a+7,i-17,"\\");
                mvwprintw(win,a+8,i-18,"\\");
                mvwprintw(win,a+9,i-19,"*");
                mvwprintw(win,a+9,i-18,"-");
                mvwprintw(win,a+9,i-20,"-");
                mvwprintw(win,a+8,i-20,"/");
                mvwprintw(win,a+7,i-21,"/");
                
                mvwprintw(win,a+7,i-25,"\\");
                mvwprintw(win,a+8,i-26,"\\");
                mvwprintw(win,a+9,i-27,"*");
                mvwprintw(win,a+9,i-26,"-");
                mvwprintw(win,a+9,i-28,"-");
                mvwprintw(win,a+8,i-28,"/");
                mvwprintw(win,a+7,i-29,"/");
                
                mvwprintw(win,a+7,i-33,"\\");
                mvwprintw(win,a+8,i-34,"\\");
                mvwprintw(win,a+9,i-35,"*");
                mvwprintw(win,a+9,i-34,"-");
                mvwprintw(win,a+9,i-36,"-");
                mvwprintw(win,a+8,i-36,"/");
                mvwprintw(win,a+7,i-37,"/");
                
                mvwprintw(win,a+7,i-41,"\\");
                mvwprintw(win,a+8,i-42,"\\");
                mvwprintw(win,a+9,i-43,"*");
                mvwprintw(win,a+9,i-42,"-");
                mvwprintw(win,a+9,i-44,"-");
                mvwprintw(win,a+8,i-44,"/");
                mvwprintw(win,a+7,i-45,"/");
              
                mvwprintw(win,a+7,i-49,"\\");
                mvwprintw(win,a+8,i-50,"\\");
                mvwprintw(win,a+9,i-51,"*");
                mvwprintw(win,a+9,i-50,"-");
                mvwprintw(win,a+9,i-52,"-");
                mvwprintw(win,a+8,i-52,"/");
                mvwprintw(win,a+7,i-53,"/");
                refresh();
                pthread_mutex_unlock(&mutex1);

                //tb++;
                usleep(70000);
                refresh();
                if (i == 53){
                    //muevan = false;                  
                    
                }
            }
    }
}

void *invasionb(void *args){
    //initscr();
    use_window(mainwindow, invasioncbb, NULL);
    

} 

static int movescb(WINDOW *win, void* data){
    int x = 40, y = 58,tx,ty;
    bool cerrar = true;
    char key = ' ';

    init_pair(5, COLOR_RED, COLOR_YELLOW);
    init_pair(8, COLOR_WHITE, COLOR_BLACK);
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
    init_pair(12, COLOR_WHITE, COLOR_WHITE);
    init_pair(17, COLOR_BLACK, COLOR_WHITE);
    init_pair(9, COLOR_BLACK, COLOR_BLACK);
  //  init_pair(12, COLOR_WHITE, COLOR_WHITE);
//    init_pair(5, COLOR_BLUE, COLOR_BLUE);
    init_pair(1, COLOR_YELLOW, COLOR_YELLOW);
    init_pair(2, COLOR_BLUE, COLOR_BLUE);
    init_pair(3, COLOR_RED, COLOR_RED);
    init_pair(4, COLOR_MAGENTA, COLOR_MAGENTA);
    init_pair(6, COLOR_CYAN, COLOR_CYAN);
    init_pair(7, COLOR_BLUE, COLOR_BLACK);
//    init_pair(8, COLOR_WHITE, COLOR_BLACK);

    
    
    
    while (cerrar){
        tx = x;
        ty = y;

        pthread_mutex_lock(&mutex1);
        //activar los atributos principales
        attron(COLOR_PAIR(12));
        mvwprintw(win,x, y, " ");
        mvwprintw(win,x - 1, y, " ");
        mvwprintw(win,x - 1, y + 1, " ");
        mvwprintw(win,x - 2, y, " ");
        mvwprintw(win,x - 2, y + 1, " ");
        mvwprintw(win,x - 2, y + 2, " ");
        mvwprintw(win,x - 3, y, " ");
        mvwprintw(win,x - 2, y + 2, " ");
        mvwprintw(win,x - 2, y + 3, " ");
        mvwprintw(win,x - 2, y + 4, " ");
        mvwprintw(win,x - 2, y + 5, " ");
        mvwprintw(win,x - 2, y + 6, " ");
        mvwprintw(win,x - 2, y + 7, " ");
        mvwprintw(win,x - 2, y + 8, " ");
        mvwprintw(win,x - 2, y + 9, " ");
        mvwprintw(win,x - 2, y + 10, " ");
        mvwprintw(win,x - 2, y + 11, " ");
        mvwprintw(win,x - 3, y + 3, " ");
        mvwprintw(win,x - 3, y + 4, " ");
        mvwprintw(win,x - 3, y + 5, " ");
        mvwprintw(win,x - 3, y + 6, " ");
        mvwprintw(win,x - 3, y + 7, " ");
        mvwprintw(win,x - 3, y + 8, " ");
        mvwprintw(win,x - 4, y + 5, " ");
        mvwprintw(win,x - 4, y + 6, " ");
        mvwprintw(win,x - 5, y + 6, " ");
        mvwprintw(win,x - 1, y + 5, " ");
        mvwprintw(win,x - 1, y + 6, " ");

        //por izquierda
        mvwprintw(win,x, y + 11, " ");
        mvwprintw(win,x - 1, y + 10, " ");
        mvwprintw(win,x - 1, y + 11, " ");
        mvwprintw(win,x - 3, y + 11, " ");

        //attroff(COLOR_PAIR(12));
        // desactiva el color

        //activa color ROJO para las zonas de ese color
        attron(COLOR_PAIR(3));
        mvwprintw(win,x - 4, y, " ");
        mvwprintw(win,x - 4, y + 11, " ");
        mvwprintw(win,x - 5, y + 5, " ");
        mvwprintw(win,x - 5, y + 6, " ");
        mvwprintw(win,x - 1, y + 4, " ");
        mvwprintw(win,x - 1, y + 7, " ");
        //attroff(COLOR_PAIR(3));
        //desactiva el color

        //activa el color AZUL para las zonas de ese color
        attron(COLOR_PAIR(5));
        mvwprintw(win,x, y + 5, " ");
        mvwprintw(win,x, y + 6, " ");
        //attroff(COLOR_PAIR(5));
        pthread_mutex_unlock(&mutex1);
        //desactiva el color
       
        
        
        key = getch();
        if (key == 10)
        {
            cerrar = false;
            clear();
        }
        else if (key == 'd')
        {
            //Comenzar a pintar de negro
            //activar los atributos principales
            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(9));
            mvwprintw(win,tx, ty, " ");
            mvwprintw(win,tx - 1, ty, " ");
            mvwprintw(win,tx - 1, ty + 1, " ");
            mvwprintw(win,tx - 2, ty, " ");
            mvwprintw(win,tx - 2, ty + 1, " ");
            mvwprintw(win,tx - 2, ty + 2, " ");
            mvwprintw(win,tx - 3, ty, " ");
            mvwprintw(win,tx - 2, ty + 2, " ");
            mvwprintw(win,tx - 2, ty + 3, " ");
            mvwprintw(win,tx - 2, ty + 5, " ");
            mvwprintw(win,tx - 2, ty + 6, " ");
            mvwprintw(win,tx - 2, ty + 7, " ");
            mvwprintw(win,tx - 2, ty + 8, " ");
            mvwprintw(win,tx - 2, ty + 9, " ");
            mvwprintw(win,tx - 2, ty + 10, " ");
            mvwprintw(win,tx - 2, ty + 11, " ");
            mvwprintw(win,tx - 3, ty + 3, " ");
            mvwprintw(win,tx - 3, ty + 4, " ");
            mvwprintw(win,x - 3, ty + 5, " ");
            mvwprintw(win,tx - 3, ty + 6, " ");
            mvwprintw(win,tx - 3, ty + 7, " ");
            mvwprintw(win,tx - 3, ty + 8, " ");
            mvwprintw(win,tx - 4, ty + 5, " ");
            mvwprintw(win,tx - 4, ty + 6, " ");
            mvwprintw(win,tx - 5, ty + 6, " ");
            mvwprintw(win,tx - 1, ty + 5, " ");
            mvwprintw(win,tx - 1, ty + 6, " ");
            //refresh();

            //por izquierda
            mvwprintw(win,tx, ty + 11, " ");
            mvwprintw(win,tx - 1, ty + 10, " ");
            mvwprintw(win,tx - 1, ty + 11, " ");
            mvwprintw(win,tx - 3, ty + 11, " ");
            //refresh();
            //attroff(COLOR_PAIR(12));
            // desactiva el color

            //activa color ROJO para las zonas de ese color
            //attron(COLOR_PAIR(3));
            mvwprintw(win,tx - 4, ty, " ");
            mvwprintw(win,tx - 4, ty + 11, " ");
            mvwprintw(win,tx - 5, ty + 5, " ");
            mvwprintw(win,tx - 5, ty + 6, " ");
            mvwprintw(win,tx - 1, ty + 4, " ");
            mvwprintw(win,tx - 1, ty + 7, " ");
            //refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvwprintw(win,tx, ty + 5, " ");
            mvwprintw(win,tx, ty + 6, " ");
            //attroff(COLOR_PAIR(9));
            
            refresh();
            y++;
            //sleep(4000);
            pthread_mutex_unlock(&mutex1);
            refresh();
            
            if (y == 120){
                y--;
            }
            

        }
        else if (key == 'a')
        {   

            pthread_mutex_lock(&mutex1);
            attron(COLOR_PAIR(9));
            mvwprintw(win,tx, ty, " ");
            mvwprintw(win,tx - 1, ty, " ");
            mvwprintw(win,tx - 1, ty + 1, " ");
            mvwprintw(win,tx - 2, ty, " ");
            mvwprintw(win,tx - 2, ty + 1, " ");
            mvwprintw(win,tx - 2, ty + 2, " ");
            mvwprintw(win,tx - 3, ty, " ");
            mvwprintw(win,tx - 2, ty + 2, " ");
            mvwprintw(win,tx - 2, ty + 3, " ");
            mvwprintw(win,tx - 2, ty + 4, " ");
            mvwprintw(win,tx - 2, ty + 5, " ");
            mvwprintw(win,tx - 2, ty + 6, " ");
            mvwprintw(win,tx - 2, ty + 7, " ");
            mvwprintw(win,tx - 2, ty + 8, " ");
            mvwprintw(win,tx - 2, ty + 9, " ");
            mvwprintw(win,tx - 2, ty + 10, " ");
            mvwprintw(win,tx - 2, ty + 11, " ");
            mvwprintw(win,tx - 3, ty + 4, " ");
            mvwprintw(win,tx - 3, ty + 5, " ");
            mvwprintw(win,tx - 3, ty + 6, " ");
            mvwprintw(win,tx - 3, ty + 7, " ");
            mvwprintw(win,tx - 3, ty + 8, " ");
            mvwprintw(win,tx - 4, ty + 5, " ");
            mvwprintw(win,tx - 4, ty + 6, " ");
            mvwprintw(win,tx - 5, ty + 6, " ");
            mvwprintw(win,tx - 1, ty + 5, " ");
            mvwprintw(win,tx - 1, ty + 6, " ");
            //refresh();
            //por izquierda
            mvwprintw(win,tx, ty + 11, " ");
            mvwprintw(win,tx - 1, ty + 10, " ");
            mvwprintw(win,tx - 1, ty + 11, " ");
            mvwprintw(win,tx - 3, ty + 11, " ");
            //refresh();
            //attroff(COLOR_PAIR(12));
            // desactiva el color

            //activa color ROJO para las zonas de ese color
            //attron(COLOR_PAIR(3));
            mvwprintw(win,tx - 4, ty, " ");
            mvwprintw(win,tx - 4, ty + 11, " ");
            mvwprintw(win,tx - 5, ty + 5, " ");
            mvwprintw(win,tx - 5, ty + 6, " ");
            mvwprintw(win,tx - 1, ty + 4, " ");
            mvwprintw(win,tx - 1, ty + 7, " ");
            //refresh();
            //attroff(COLOR_PAIR(3));
            //desactiva el color

            //activa el color AZUL para las zonas de ese color
            //attron(COLOR_PAIR(9));
            mvwprintw(win,tx, ty + 5, " ");
            mvwprintw(win,tx, ty + 6, " ");
            //attroff(COLOR_PAIR(9));
            refresh();
            y--;
            //sleep(4000);
            pthread_mutex_unlock(&mutex1);
            refresh();
            
            //pthread_mutex_lock(&mutex1);
            if (y == 0){
                y++;
            }
            //pthread_mutex_unlock(&mutex1);

            //pthread_mutex_lock(&mutex1);
            if(key == ' '){
                y--;
                usleep(4000);
            }
            //pthread_mutex_unlock(&mutex1);
            
        }else if(key == 27){
            //_sleep(5000);
            //system("PAUSE");
        }else if (key == ' '){
            
            for (int i = (tx - 6); i >= 0; i--){
                
                pthread_mutex_lock(&mutex1);
                attron(COLOR_PAIR(5));
                mvwprintw(win,i, y, "@");
                
                attron(COLOR_PAIR(9));
                mvwprintw(win,i+1, y, " ");
                
                //sleep(5);
                
                refresh();
                pthread_mutex_unlock(&mutex1);
                usleep(4000);
                if (i == 0){
                    
                    clear();
                }
            }

        }     
    }

}

void *moves(void *args){
    use_window(mainwindow, movescb, NULL);
    
        

   // endwin();


}

int main(int argc, char *argv[]){
	
    
	mainwindow = initscr();
	start_color();
	curs_set(0);
    noecho();
    keypad(stdscr, TRUE);

    pthread_t hilo1;
    pthread_t hilo2;
    pthread_t hilo3;
    
    
    pthread_create(&hilo1,NULL,invasion,NULL);
    
    pthread_create(&hilo2,NULL,moves,NULL);

    pthread_join(hilo1,NULL);
    pthread_join(hilo2,NULL);
    
    
   // pthread_create(&hilo3,NULL,invasionb,NULL);
    //pthread_join(hilo3,NULL);





    endwin();
	return 0;
}