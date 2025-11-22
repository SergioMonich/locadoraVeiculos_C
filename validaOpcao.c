/**
* @file validaOpcao.c
* @author Sergio Monich 
* @date 22/11/2025
* @brief Lê e valida a entrada de uma opção de menu. Imprime o prompt na posição (x, y), lê um inteiro, e lida com erros de entrada não-numérica, limpando o buffer
* @param x Coordenada X (coluna) para imprimir o prompt
* @param y Coordenada Y (linha) para imprimir o prompt
* @param prompt A mensagem a ser exibida ao usuário ("Digite uma opcao: ")
* @return O valor inteiro lido pelo usuário. Retorna -1 se a entrada não for numérica
*/

#include "locadora.h"

int validaOpcao(int x, int y, const char *prompt) {

    int opcao;

    gotoxy(x, y);
    printf("%s", prompt);

    if (scanf("%d", &opcao) != 1) { //se usuário digitar uma letra, scanf retorna 0
            limpaBuffer();
            opcao = -1; //força e entrada no DEFAULT do switch
    } else {
            limpaBuffer();
    }

    return opcao;

}