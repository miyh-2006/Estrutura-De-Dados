#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    char Chave;
    struct No * F[2];
} No;

No * criarNo(char Chave) {
    No * N = (No *) malloc(sizeof(No));
    if (N == NULL) {
        printf("ERRO: não há espaço em memória!\n");
        return NULL;
    }

    N->Chave = Chave;
    N->F[0] = NULL;
    N->F[1] = NULL;

    return N;
}

int main() {
    No * A = criarNo('a');
    No * B = criarNo('b');
    No * C = criarNo('c');
    No * D = criarNo('d');

    A->F[0] = B;
    A->F[1] = C;
    C->F[1] = D;

    printf("%c\n", A->F[1]->F[1]->Chave);
}
