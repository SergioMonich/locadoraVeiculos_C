/**
* @file pesquisaCnh.c
* @author Sergio Monich 
* @date 26/11/2025
* @brief Busca um cliente na lista pela CNH
* @param Lista Ponteiro para a estrutura de controle da lista
* @param pesqCnh String contendo o CPF a ser procurado
* @return Ponteiro para o nó (ItemClientes) se encontrado, ou NULL se não encontrado
*/

#include "locadora.h"

ponteiroClientes PesquisaCnh(ListaClientes *Lista, const char *pesqCnh) {

    if (Lista == NULL || Lista->Primeiro == NULL) {
        return NULL;
    }

    ponteiroClientes Atual = Lista->Primeiro;

    while (Atual != NULL) {
        if (strcmp (Atual->Dados.cnh, pesqCnh) == 0) {
            return Atual;
        }
        
        Atual = Atual->Proximo;        
    }
    
    return NULL;

}