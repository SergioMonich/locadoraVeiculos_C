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
    printf("CPF* [           ]");

    gotoxy(23, 9);
    printf("CNH* [           ]");

    gotoxy(44, 9);
    printf("Categoria [  ]");

    gotoxy(3, 11);
    printf("Validade* [        ]");

    gotoxy(26, 11);
    printf("Data Cadastro* [        ]");

    gotoxy(3, 13);
    printf("Nome completo [                                                            ] ");

    gotoxy(3, 15);
    printf("Endereco [                                                                 ]");

    gotoxy(3, 17);
    printf("Cidade [                                                      ]");

    gotoxy(68, 17);
    printf("Estado [  ]");

    gotoxy(3, 19);
    printf("Telefone* [           ]");

    gotoxy(29, 19);
    printf("Status [ ]");

    gotoxy(3, 23);
    printf("*SOMENTE NUMEROS || Status [1-ATIVO 2-INATIVO 3-BLOQUEADO]");

}