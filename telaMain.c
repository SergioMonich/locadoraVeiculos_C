/**
* @file telaMain.c
* @author SERGIO MONICH 
* @date 21/11/2025
* @brief TELA PRINCIPAL
*/

#include "locadora.h"

void telaMain() {

    tela();

    gotoxy(27, 6);
    printf("===== MENU PRINCIPAL =====");

    gotoxy(10, 8);
    printf("[ 1] - CLIENTES");

    gotoxy(10, 10);
    printf("[ 2] - VEICULOS");

    gotoxy(10, 12);
    printf("[ 3] - CATEGORIAS");

    gotoxy(10, 14);
    printf("[ 4] - MOVIMENTACAO");

    gotoxy(10, 16);
    printf("[ 5] - RELATORIOS");

    gotoxy(10, 18);
    printf("[ 6] - FINALIZAR");

}