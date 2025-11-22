/**
* @file movimentacao.c
* @author Sergio Monich 
* @date 22/11/2025
* @brief  main das funcionalidades de movimentacao
*/

#include "locadora.h"

void movimentacao() {

    int opcao;
    
    do {
        telaOpcaoMovimentacao();
        
        gotoxy(25, 6);
        printf("===== MENU MOVIMENTACAO =====");
        
        limpaMensagem();
        opcao = validaOpcao(3, 23, "Digite uma opcao: ");

        switch(opcao) {
            case 1:
                limpaMensagem();
                gotoxy(3, 23);
                printf("DIGITOU 1");
                getch();
            break;

            case 2:
                limpaMensagem();
                gotoxy(3, 23);
                printf("DIGITOU 2");
                getch();
            break;

            case 3:
            break;

            default:
                limpaMensagem();
                gotoxy(3, 23);
                printf("[ERRO] Digite uma opcao valida! Pressione ENTER.");
                getch();
            break;
        }
    } while (opcao < 1 || opcao > 3);

}