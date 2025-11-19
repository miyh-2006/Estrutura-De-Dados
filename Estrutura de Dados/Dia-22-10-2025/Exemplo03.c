#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    int Chave;
    struct Item * Proximo;
} Item;

int main () {

    system("cls");

    Item * A = (Item *)malloc(sizeof(Item));
    Item * B = (Item *)malloc(sizeof(Item));
    Item * C = (Item *)malloc(sizeof(Item));
    Item * D = (Item *)malloc(sizeof(Item));

    A -> Chave = 25;
    B -> Chave = 36;
    C -> Chave = 50;
    D -> Chave = 64;

    A -> Proximo = NULL;
    B -> Proximo = NULL;
    C -> Proximo = NULL;
    D -> Proximo = NULL;

    
    // Construindo a lista ENCADEADA A, C, B, D

    A -> Proximo = C;
    C -> Proximo = B;
    B -> Proximo = D;

    // Verificando os encadeamentos.

    printf ("A - %X\t %d\t %X\n", A, A -> Chave, A -> Proximo);
    printf ("B - %X\t %d\t %X\n", B, B -> Chave, B -> Proximo);
    printf ("C - %X\t %d\t %X\n", C, C -> Chave, C -> Proximo);
    printf ("D - %X\t %d\t %X\n", D, D -> Chave, D -> Proximo);

    // 1) D -> Proximo = NULL pois D é o último elemento da lista.
    
    // 2) Qual o valor de A -> Proximo -> Proximo -> Chave? Resposta: 36


    printf("\n\n%d\n",A -> Proximo -> Proximo -> Chave);
}