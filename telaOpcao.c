/**
* @file telaOpcao.c
* @author Sergio Monich 
* @date 22/11/2025
* @brief  Projetar o menu de opcoes das funcionalidades de clientes, veiculos e categorias
*/

#include "locadora.h"

void telaOpcao() {

    tela();

    gotoxy(10, 8);
    printf("[ 1] - INCLUSAO");

    gotoxy(10, 10);
    printf("[ 2] - CONSULTA");

    gotoxy(10, 12);
    printf("[ 3] - ALTERACAO");

    gotoxy(10, 14);
    printf("[ 4] - EXCLUSAO");

    gotoxy(10, 16);
    printf("[ 5] - RETORNAR");

}