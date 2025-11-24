/**
* @file incluirClientes.c
* @author Sergio Monich 
* @date 23/11/2025
* @brief  inclusão de clientes na base
*/

#include "locadora.h"

void incluirClientes(ListaClientes *Lista) {

    if (Lista == NULL) {
        limpaMensagem();
        gotoxy(3, 23);
        printf("[ERRO] Lista com ponteiro NULL");
        getch();
        return;
    }

    ponteiroClientes NovoCliente = (ponteiroClientes) malloc (sizeof(ItemClientes));

    if (NovoCliente == NULL) {
        limpaMensagem();
        gotoxy(3, 23);
        printf("[ERRO] Memoria insuficiente");
        getch();
        return;
    }

    NovoCliente->dados.idCliente = Lista->proximoIdClientes;
    Lista->proximoIdClientes++;

    telaIncluirClientes();
    getch();

    /*
    gotoxy(11, 7);
    printf("%d", NovoCliente->dados.idCliente);

    gotoxy(18, 9);
    fgets(NovoCliente->dados.nome, 40, stdin);

    gotoxy(8, 11);
    fgets(NovoCliente->dados.cpf, 14, stdin);

    gotoxy(50, 11);
    fgets(NovoCliente->dados.cnh, 15, stdin);

    gotoxy(14, 13);
    fgets(NovoCliente->dados.categoria, 15, stdin);

    gotoxy(53, 13);
    fgets(NovoCliente->dados.validadeCnh, 15, stdin);

    gotoxy(13, 15);
    fgets(NovoCliente->dados.endereco, 60, stdin);

    gotoxy(11, 17);
    fgets(NovoCliente->dados.cidade, 30, stdin);

    gotoxy(76, 17);
    fgets(NovoCliente->dados.estado, 60, stdin);
    */
}