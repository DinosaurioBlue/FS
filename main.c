#include<ncurses.h>
#define BOARDHEIGHT 20
#define BOARDWIDTH (BOARDHEIGHT*2.5)


int main (void){

    initscr();
    refresh();

    WINDOW * boardw = newwin(BOARDHEIGHT+2,BOARDWIDTH+2,0,0);
    box(boardw,'#','#');
    wrefresh(boardw);

    WINDOW * lifesw = newwin(3,BOARDWIDTH+2,BOARDHEIGHT+2+2,0);
    box(lifesw,'#','#');
    wrefresh(lifesw);

    WINDOW * scorew = newwin(3,BOARDWIDTH+2,BOARDHEIGHT+2+2+3,0);
    box(scorew,'#','#');
    wrefresh(scorew);
    








    getch();
    endwin();
    return (0);
}