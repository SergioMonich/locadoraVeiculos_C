/**
* @file telaIncluirClientes.c
* @author Sergio Monich 
* @date 23/11/2025
* @brief  projetar tela de inclusão de clientes na base
*/

#include "locadora.h"

void telaIncluirClientes() {

    tela();    
    
    gotoxy(26, 6);
    printf("===== INCLUIR CLIENTES =====");

    gotoxy(3, 7);
    printf("Codigo: ");

    gotoxy(3, 9);
    printf("Nome completo [                                                            ] ");

    gotoxy(3, 11);
    printf("CPF [           ]");

    gotoxy(20, 11);
    printf("(somente numeros)");

    gotoxy(45, 11);
    printf("CNH [           ]");

    gotoxy(62, 11);
    printf("(somente numeros)");

    gotoxy(3, 13);
    printf("Categoria [  ]");

    gotoxy(43, 13);
    printf("Validade [        ]");

    gotoxy(62, 13);
    printf("(somente numeros)");

    gotoxy(3, 15);
    printf("Endereco [                                                                 ]");

    gotoxy(3, 17);
    printf("Cidade [                                                      ]");

    gotoxy(68, 17);
    printf("Estado [  ]");

    gotoxy(3, 19);
    printf("Data Cadastro [        ]");

    gotoxy(27, 19);
    printf("(somente numeros)");

    gotoxy(3, 21);
    printf("Status [1 - ATIVO || 2 - INATIVO || 3 - BLOQUEADO]");

}