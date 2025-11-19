//Implementação de uma arvore genérica, considerando grau 3

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    char Chave;
    struct No * F1;
    struct No * F2;
    struct No * F3;

} No;

No * criarNo (char Chave) {

    No * N = ( No *) malloc(sizeof(No));
    if (N== NULL) {
    printf("ERRO: não há espaço em memória para armazenar o Nó!\n");
    return NULL;
    }

    N-> Chave = Chave;
    N->F1 = NULL;
    N->F2 = NULL;
    N->F3 = NULL;
    return N;
}

int main () {

    No * A = criarNo ('a');
    No * B = criarNo ('b');
    No * C = criarNo ('c');
    No * D = criarNo ('d');

    A->F1 = B; // O 1° filho de A é B
    A->F2 = C; // O 2° filho de A é C
    A->F3 = D; // O último filho de A é D

    system("cls");

    printf("%c \n", A->F2->Chave);
}