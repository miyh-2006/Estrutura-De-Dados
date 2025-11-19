//Implementação de uma arvore genérica, considerando grau 3

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    char Chave;
    struct No * F[3]; // vetor de ponteiros

} No;

No * criarNo (char Chave) {

    No * N = ( No *) malloc(sizeof(No));
    if (N== NULL) {
    printf("ERRO: não há espaço em memória para armazenar o Nó!\n");
    return NULL;
    }

    N-> Chave = Chave;
    for(int i = 0; i < 3; i++) N -> F[i] = NULL;
    return N;
}

int main () {

    No * A = criarNo ('a');
    No * B = criarNo ('b');
    No * C = criarNo ('c');
    No * D = criarNo ('d');

    A->F[0] = B; // O 1° filho de A é B
    A->F[1] = C; // O 2° filho de A é C
    A->F[2] = D; // O último filho de A é D

    system("cls");

    printf("%c \n", A->F[1]->Chave);
}