/**
* @file incluirClientes.c
* @author Sergio Monich 
* @date 23/11/2025
* @brief  inclusão de clientes na base
*/

#include "locadora.h"

void incluirClientes(ListaClientes *Lista) {

    char pesquisarCpf[14];

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

    gotoxy(8, 9);
    fgets(pesquisarCpf, 14, stdin);

    ponteiroClientes ClienteExiste = PesquisaCpf(Lista, pesquisarCpf);

    if (ClienteExiste != NULL) {
        limpaMensagem();
        gotoxy(3, 23);
        printf("[ERRO] CPF cadastrado no sistema");
        getch();

        free(NovoCliente);
        return;
    }

    strcpy(NovoCliente->Dados.cpf, pesquisarCpf);

    gotoxy(50, 9);
    fgets(NovoCliente->Dados.cnh, 15, stdin);

    gotoxy(18, 11);
    fgets(NovoCliente->Dados.nome, 40, stdin);

    gotoxy(14, 13);
    fgets(NovoCliente->Dados.categoria, 15, stdin);

    gotoxy(53, 13);
    fgets(NovoCliente->Dados.validadeCnh, 10, stdin);

    gotoxy(13, 15);
    fgets(NovoCliente->Dados.endereco, 60, stdin);

    gotoxy(11, 17);
    fgets(NovoCliente->Dados.cidade, 30, stdin);

    gotoxy(76, 17);
    fgets(NovoCliente->Dados.estado, 2, stdin);

    gotoxy(17, 19);
    fgets(NovoCliente->Dados.dataCadastro, 10, stdin);

}