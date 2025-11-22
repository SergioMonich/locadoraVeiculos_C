/**
* @file telaOpcaoRelatorios.c
* @author Sergio Monich 
* @date 22/11/2025
* @brief  Projetar o menu de opcoes das funcionalidades de relatorios
*/

#include "locadora.h"

void telaOpcaoRelatorios() {

    tela();

    gotoxy(10, 8);
    printf("[ 1] - CARTEIRA DO CLIENTE");

    gotoxy(10, 10);
    printf("[ 2] - BALANCO DA FROTA");

    gotoxy(10, 12);
    printf("[ 3] - BALANCO DE MOVIMENTACOES");

    gotoxy(10, 14);
    printf("[ 4] - RETORNAR");

}