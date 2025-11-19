//Implementação de uma arvore genérica, considerando grau 3

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    char Chave;
    struct No * Esquerda; // vetor de ponteiros
    struct No * Direita;

} No;

No * criarNo (char Chave) {

    No * N = ( No *) malloc(sizeof(No));
    if (N== NULL) {
    printf("ERRO: não há espaço em memória para armazenar o Nó!\n");
    return NULL;
    }

    N-> Chave = Chave;
    N->Esquerda = NULL;
    N->Direita = NULL;
    return N;
}

int main () {

    No * A = criarNo ('a');
    No * B = criarNo ('b');
    No * C = criarNo ('c');
    No * D = criarNo ('d');

    A->Esquerda = B;
    A->Direita = C;
    C->Direita = D;

    system("cls");

    printf("%c \n", A->Direita->Direita->Chave);
}