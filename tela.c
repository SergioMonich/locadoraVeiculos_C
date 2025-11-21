/**
* @file tela.c
* @author SERGIO MONICH 
* @date 21/11/2025
* @brief TELA PADRÃO COM MARGENS
*/

#include "locadora.h"

/**
 * @brief Evite colocar um zero (0) à esquerda de números inteiros no C, a menos que a intenção seja defini-los como constantes octais
 */

void tela() {

    system("cls");
    system("color 0a");

    for (int linha = 1; linha < 25; linha++) {
        gotoxy(1, linha);
        printf("|");
        gotoxy(80, linha);
        printf("|");
    }

    gotoxy(3, 2);
    printf("XYZ LOCADORA DE VEICULOS LTDA");

    gotoxy(3, 3);
    printf("SISTEMA DE CONTROLE DE LOCACAO");

    gotoxy(1, 1);
    printf("+");

    gotoxy(80, 1);
    printf("+");

    gotoxy(1, 4);
    printf("+");

    gotoxy(80, 4);
    printf("+");
    
    gotoxy(1, 22);
    printf("+");

    gotoxy(80, 22);
    printf("+");

    gotoxy(1, 24);
    printf("+");

    gotoxy(80, 24);
    printf("+");

    for (int coluna = 2; coluna < 80; coluna++) {
        gotoxy(coluna, 1);
        printf("-");

        gotoxy(coluna, 4);
        printf("-");

        gotoxy(coluna, 22);
        printf("-");

        gotoxy(coluna, 24);
        printf("-");
    }

}