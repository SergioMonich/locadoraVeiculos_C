/**
* @file gotoxy.c
* @author SERGIO MONICH 
* @date 21/11/2025
* @brief FUNÇÃO DE POSICIONAMENTO DO CURSOR
*/

#include "locadora.h"

void gotoxy(int x, int y) {

    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}