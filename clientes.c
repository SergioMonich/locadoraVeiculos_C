/**
* @file clientes.c
* @author Sergio Monich 
* @date 22/11/2025
* @brief  main das funcionalidades de clientes
*/

#include "locadora.h"

void clientes() {
    
    int opcao;
    
    do {
        telaOpcao();

        gotoxy(27, 6);
        printf("===== MENU CLIENTES =====");

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
                limpaMensagem();
                gotoxy(3, 23);
                printf("DIGITOU 3");
                getch();
            break;

            case 4:
                limpaMensagem();
                gotoxy(3, 23);
                printf("DIGITOU 4");
                getch();
            break;

            case 5:
            break;

            default:
                limpaMensagem();
                gotoxy(3, 23);
                printf("[ERRO] Digite uma opcao valida! Pressione ENTER.");
                getch();
            break;
        }
    } while (opcao < 1 || opcao > 5);

}