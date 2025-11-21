/**
* @file locadoraVeiculo.c
* @author Sergio Monich 
* @date 21/11/2025
* @brief O objetivo desta função é limpar o buffer de entrada (teclado), descartando quaisquer caracteres remanescentes que o usuário tenha digitado até que uma quebra de linha (\n) ou o fim do arquivo (EOF) seja encontrado 
*/

#include "locadora.h"

void limpaBuffer(void) {

    int buffer;

    while ((buffer = getchar()) != '\n' && buffer != EOF) {}

}