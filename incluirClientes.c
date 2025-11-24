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

    NovoCliente->Dados.idCliente = Lista->proximoIdClientes;
    Lista->proximoIdClientes++;

    telaIncluirClientes();

    gotoxy(11, 7);
    printf("%d", NovoCliente->Dados.idCliente);

    gotoxy(18, 9);
    fgets(NovoCliente->Dados.nome, 40, stdin);

    gotoxy(8, 11);
    fgets(NovoCliente->Dados.cpf, 14, stdin);

    gotoxy(50, 11);
    fgets(NovoCliente->Dados.cnh, 15, stdin);

    gotoxy(14, 13);
    fgets(NovoCliente->Dados.categoria, 15, stdin);

    gotoxy(53, 13);
    fgets(NovoCliente->Dados.validadeCnh, 15, stdin);

    gotoxy(13, 15);
    fgets(NovoCliente->Dados.endereco, 60, stdin);

    gotoxy(11, 17);
    fgets(NovoCliente->Dados.cidade, 30, stdin);

    gotoxy(76, 17);
    fgets(NovoCliente->Dados.estado, 60, stdin);

}