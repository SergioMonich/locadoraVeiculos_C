/**
* @file locadora.h
* @author Sergio Monich
* @date 21/11/2025
* @brief Arquivo de referência dos protótipos
*/

/**
 * @brief O Include Guard garante que o conteúdo de um arquivo de cabeçalho (.h) seja incluído apenas uma vez durante o processo de compilação, mesmo que ele seja incluído (via #include) em múltiplos arquivos-fonte (.c)
 */

#ifndef locadora_h
#define locadora_h

/**
 * @brief (Standard Input/Output) É a biblioteca mais fundamental, responsável por toda a entrada e saída de dados (I/O) básica
 * Funções Comuns:
 * Leitura/escrita de dados: printf(), scanf()
 * Manipulação de arquivos: fopen(), fclose(), fprintf(), fscanf()
 * 
 * @brief (Console Input/Output) Oferece funções para interagir diretamente com o console (tela e teclado), muitas vezes controlando a cor, a posição do cursor e lendo caracteres sem a necessidade de pressionar Enter
 * Importante: Esta biblioteca não é padrão C (não é ANSI C). É comumente encontrada em compiladores mais antigos ou específicos do ambiente DOS/Windows e pode não funcionar em sistemas Linux ou macOS
 * Funções Comuns: 
 * getch() (lê um caractere sem eco), clrscr() (limpa a tela)
 * 
 * @brief (Standard Library) Oferece funções de utilidade geral para gerenciar memória, realizar conversões de tipos, gerar números aleatórios e controlar o fluxo do programa
 * Funções Comuns:
 * Alocação de memória dinâmica: malloc(), calloc(), free()
 * Conversão de strings: atoi(), atof()
 * Controle de programa: exit(), system()
 * 
 * @brief (String Handling) Fornece um conjunto de funções para manipular cadeias de caracteres (strings) e blocos de memória
 * Funções Comuns:
 * Cópia e concatenação: strcpy(), strcat()
 * Comparação: strcmp()
 * Cálculo de comprimento: strlen()
 * 
 * @brief (Standard Boolean) Define o tipo bool e as constantes booleanas true (verdadeiro) e false (falso)
 * 
 * @brief (Windows API) É o cabeçalho mestre que dá acesso a milhares de funções da API (Application Programming Interface) nativa do sistema operacional Windows
 * Importante: Assim como <conio.h>, esta biblioteca não é padrão e não é portável. Ela é usada exclusivamente para escrever programas que rodam no Windows e precisam acessar recursos do sistema operacional (como manipulação de janelas, threads, configurações do sistema, etc.)
 * Funções Comuns: 
 * Sleep(), MessageBox()
 */

#include <stdio.h> 
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>

// - * - * - * - * - * - *// 
//        STRUCTS         // 
// - * - * - * - * - * - *//



// - * - * - * - * - * - *// 
//         TELAS          // 
// - * - * - * - * - * - *//

void tela();
void telaMain();
void telaOpcao();
void telaOpcaoMovimentacao();

// - * - * - * - * - * - *// 
//        FUNÇÕES         // 
// - * - * - * - * - * - *//

void gotoxy();
void limpaMensagem();
void limpaBuffer(void);
int validaOpcao(int x, int y, const char *prompt);
void clientes();
void veiculos();
void categorias();
void movimentacao();


#endif