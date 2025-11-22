/**
* @file telaOpcaoMovimentacao.c
* @author Sergio Monich 
* @date 22/11/2025
* @brief  Projetar o menu de opcoes das funcionalidades de movimentação
*/

#include "locadora.h"

void telaOpcaoMovimentacao() {

    tela();

    gotoxy(10, 8);
    printf("[ 1] - LOCACAO (RETIRADA)");

    gotoxy(10, 10);
    printf("[ 2] - DEVOLUCAO");

    gotoxy(10, 12);
    printf("[ 3] - RETORNAR");

}