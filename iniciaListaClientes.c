/**
* @file iniciaListaClientes.c
* @author Sergio Monich 
* @date 23/11/2025
* @brief  inicialização da lista de clientes. Define o primeiro e o último ponteiro como NULL e o tamanho como zero
* @param ListaClientes Ponteiro para a estrutura de controle da lista
*/

#include "locadora.h"

void iniciaListaClientes(ListaClientes *ListaClientes) {

    ListaClientes->primeiro = NULL;
    ListaClientes->ultimo = NULL;
    ListaClientes->tamanhoListaClientes = 0;

}

