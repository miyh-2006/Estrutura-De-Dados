//Implementação de uma arvore genérica, considerando grau 3

#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int Chave;
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

//Função para contar a quantidade de nós de uma árvore
 int calcularAltura(No * N) {

    if ( N == NULL) return 0;
    else return 1 + contarNos(N->Esquerda) + contarNos(N->Direita);

 }

int main () {

    // 1°Nivel: 10

    No * Raiz = criarNo(10);

    //2°Nivel: 12 e 15
    Raiz->Esquerda = criarNo(12);
    Raiz->Direita = criarNo(15);

    //3°Nivel:16, 18 e 20
    Raiz->Esquerda->Esquerda = criarNo(16);
    Raiz->Direita->Esquerda = criarNo(18);
    Raiz->Direita->Direita = criarNo(20);


    //4°Nivel: 17 e 19
    Raiz->Direita->Direita->Esquerda = criarNo(17);
    Raiz->Direita->Direita->Direita = criarNo(17);

    //Teste:
    printf("Quantidade de nós: %d \n", contarNos(Raiz));
}