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

/**
 * @brief Estrutura de Dados (Sem Tag).	Contém apenas os dados puros de um cliente. Isso garante que a lógica de manipulação da lista fique separada dos atributos do cliente
 * @param idCliente Chave primária, identificador único
 * @param status 0 = Ativo / 1 = Inativo / 2 = Bloqueado
 */

typedef struct {
    int idCliente;
    char cpf[14];
    char cnh[15];
    char categoria[2];
    char validadeCnh[10];
    char dataCadastro[10];
    char nome[40];
    char endereco[60];
    char cidade[30];
    char estado[3];
    char telefone[15];
    int status;
    int locaçoes;
    float debitos;
} Clientes;

typedef struct ItemClientes *ponteiroClientes;

/**
 * @brief Estrutura de Nó. O NÓ da lista. É a unidade que contém o dado e os links de navegação
 * @param Dados Armazena a instância completa dos dados do cliente
 * @param Anterior Ponteiro. O link para o nó anterior
 * @param Proximo Ponteiro. O link para o próximo nó
 */

typedef struct ItemClientes {
    Clientes Dados;
    ponteiroClientes Anterior;
    ponteiroClientes Proximo;
} ItemClientes;

/**
 * @param Primeiro Aponta para o primeiro nó da lista (cabeça)
 * @param Ultimo Aponta para o último nó da lista (cauda)
 * @param tamanhoListaClientes Mantém o tamanho atual da lista, permitindo acesso rápido à contagem
 * @param proximoIdClientes Para que o ID seja sequencial e único, ele não deve ser inicializado dentro da função de inclusão. Em vez disso, usa-se um campo na estrutura de controle para rastrear o último ID atribuído
 */

typedef struct {
    ItemClientes *Primeiro;
    ItemClientes *Ultimo;
    int tamanhoListaClientes;
    int proximoIdClientes;
} ListaClientes;

// - * - * - * - * - * - *// 
//         TELAS          // 
// - * - * - * - * - * - *//

void tela();
void telaMain();
void telaOpcao();
void telaOpcaoMovimentacao();
void telaOpcaoRelatorios();
void telaIncluirClientes();

// - * - * - * - * - * - *// 
//        FUNÇÕES         // 
// - * - * - * - * - * - *//

void gotoxy();
void limpaMensagem();
void limpaBuffer(void);
int validaOpcao(int x, int y, const char *prompt);
void clientes(ListaClientes *Lista);
void veiculos();
void categorias();
void movimentacao();
void relatorios();
void iniciaListaClientes(ListaClientes *Lista);
void incluirClientes(ListaClientes *Lista);
ponteiroClientes PesquisaCpf(ListaClientes *Lista, const char *pesqCpf);
ponteiroClientes PesquisaCnh(ListaClientes *Lista, const char *pesqCnh);
void inserirListaClientes(ListaClientes *Lista, ponteiroClientes *NovoCliente);

#endif