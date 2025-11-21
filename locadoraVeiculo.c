/**
* @file locadoraVeiculo.c
* @author SERGIO MONICH 
* @date 21/11/2025
* @brief MAIN DO PROGRAMA
*/

#include "locadora.h"

int main() {

    telaMain();

    int opcaoMain;
    
    do {
        limpaMensagem();
        gotoxy(3, 23);
        printf("Digite uma opcao: ");

        if (scanf("%d", &opcaoMain) != 1) { //se usuário digitar uma letra, scanf retorna 0
            limpaBuffer();
            opcaoMain = -1; //força e entrada no DEFAULT do switch
        } else {
            limpaBuffer();
        }

        switch(opcaoMain) {
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
                limpaMensagem();
                gotoxy(3, 23);
                printf("DIGITOU 5");
                getch();
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
    } while (opcaoMain < 1 || opcaoMain > 6);
    
    return 0;

}