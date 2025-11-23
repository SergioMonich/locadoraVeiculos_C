/**
* @file locadoraVeiculo.c
* @author Sergio Monich 
* @date 21/11/2025
* @brief Main principal
*/

#include "locadora.h"

int main() {

    ListaClientes ListadeClientes;
    iniciaListaClientes(&ListadeClientes);

    
    
    int opcao;

    do {
        telaMain();

        limpaMensagem();
        opcao = validaOpcao(3, 23, "Digite uma opcao: ");

        switch(opcao) {
            case 1:
                clientes();
            break;

            case 2:
                veiculos();
            break;

            case 3:
                categorias();
            break;

            case 4:
                movimentacao();
            break;

            case 5:
                relatorios();
            break;

            case 6:
            break;

            default:
                limpaMensagem();
                gotoxy(3, 23);
                printf("[ERRO] Digite uma opcao valida! Pressione ENTER.");
                getch();
            break;
        }
    } while (opcao != 6);
    
    return 0;

}