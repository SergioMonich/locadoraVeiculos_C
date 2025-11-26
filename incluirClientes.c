/**
* @file incluirClientes.c
* @author Sergio Monich 
* @date 23/11/2025
* @brief  inclusão de clientes na base
*/

#include "locadora.h"

void incluirClientes(ListaClientes *Lista) {

    char pesquisarCpf[14], pesquisarCnh[15];
    int confirmaIncluir, continuaCadastro, clienteSalvo = 0;

    do {
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

        gotoxy(9, 9);
        fgets(pesquisarCpf, 14, stdin);

        ponteiroClientes CpfExiste = PesquisaCpf(Lista, pesquisarCpf);

        if (CpfExiste != NULL) {
            limpaMensagem();
            gotoxy(3, 23);
            printf("[ERRO] CPF cadastrado no sistema");
            getch();

            free(NovoCliente);
            return;
        }

        strcpy(NovoCliente->Dados.cpf, pesquisarCpf);

        gotoxy(29, 9);
        fgets(pesquisarCnh, 15, stdin);

        ponteiroClientes CnhExiste = PesquisaCnh(Lista, pesquisarCnh);

        if (CnhExiste != NULL) {
            limpaMensagem();
            gotoxy(3, 23);
            printf("[ERRO] CNH cadastrada no sistema");
            getch();

            free(NovoCliente);
            return;
        }

        strcpy(NovoCliente->Dados.cnh, pesquisarCnh);

        gotoxy(55, 9);
        fgets(NovoCliente->Dados.categoria, 15, stdin);

        gotoxy(14, 11);
        fgets(NovoCliente->Dados.validadeCnh, 10, stdin); //fazer validação das datas
        
        gotoxy(42, 11);
        fgets(NovoCliente->Dados.dataCadastro, 10, stdin); //fazer validação das datas
        
        gotoxy(18, 13);
        fgets(NovoCliente->Dados.nome, 40, stdin);

        gotoxy(13, 15);
        fgets(NovoCliente->Dados.endereco, 60, stdin);

        gotoxy(11, 17);
        fgets(NovoCliente->Dados.cidade, 30, stdin);

        gotoxy(76, 17);
        fgets(NovoCliente->Dados.estado, 3, stdin);

        gotoxy(14, 19);
        fgets(NovoCliente->Dados.telefone, 15, stdin);

        gotoxy(37, 19);
        scanf("%d", &NovoCliente->Dados.status); //atribuir lógica (ativo-inativo-bloqueado) ao status
        limpaBuffer();

        do {
            limpaMensagem();
            gotoxy(3, 23);
            printf("Confirma SALVAR cliente? [1 - SIM || 2 - NAO]");
            scanf("%d", &confirmaIncluir);

            switch (confirmaIncluir) {
                case 1:
                    inserirListaClientes(Lista, NovoCliente);
                    clienteSalvo = 1;
                    confirmaIncluir = 2; //forçar a saída do loop 
                break;

                case 2:
                break;

                default:
                    limpaMensagem();
                    gotoxy(3, 23);
                    printf("[ERRO] Digite uma opcao valida! Pressione ENTER.");
                    getch();
                break;
            }
        } while (confirmaIncluir != 2);

        if (clienteSalvo == 0) {
            free(NovoCliente);
            limpaMensagem();
            gotoxy(3, 23);
            printf("Operacao cancelada!");
            getch();
        } else {
            limpaMensagem();
            gotoxy(3, 23);
            printf("[INFO] Cliente cadastrado com sucesso!");
            getch();
        }

        limpaMensagem();
        gotoxy(3, 23);
        printf("Deseja cadastrar outro cliente? [1 - SIM || 2 - NAO]");
        scanf("%d", &continuaCadastro);
        limpaBuffer();
    } while (continuaCadastro == 1);

}