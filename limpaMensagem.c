/**
* @file limpaMensagem.c
* @author SERGIO MONICH 
* @date 21/11/2025
* @brief FUNCAO PARA APAGAR MENSAGENS DO CAMPO DE MENSAGENS/COMANDOS
*/

#include "locadora.h"

void limpaMensagem() {

    for (int coluna = 2; coluna < 80; coluna++) {
        gotoxy(coluna, 23);
        printf(" ");
    }

}