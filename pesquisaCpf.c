/**
* @file pesquisaCpf.c
* @author Sergio Monich 
* @date 24/11/2025
* @brief Busca um cliente na lista pelo CPF
* @param Lista Ponteiro para a estrutura de controle da lista
* @param pesqCpf String contendo o CPF a ser procurado
* @return Ponteiro para o nó (ItemClientes) se encontrado, ou NULL se não encontrado
*/

#include "locadora.h"

ponteiroClientes PesquisaCpf(ListaClientes *Lista, const char *pesqCpf) {

    if (Lista == NULL || Lista->primeiro == NULL) {
        return NULL;
    }

    ponteiroClientes Atual = Lista->Primeiro;

    while (Atual != NULL) {
        if (strcmp (Atual->Dados.cpf, pesqCpf) == 0) {
            return Atual;
        }
        
        Atual = Atual->Proximo;        
    }
    
    return NULL;

}