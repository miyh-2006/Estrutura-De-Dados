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

    // 1) Construindo a lista ENCADEADA A, B, C, D.

    A -> Proximo = B;
    B -> Proximo = C;
    C -> Proximo = D; // Depois do último (D) está o primeiro (A)

   Item * X = (Item *) malloc (sizeof(Item));

   for ( X = A; X != NULL; X = X ->Proximo) {}

    printf("%X\t %d\t %X\n", X, X ->Chave, X->Proximo); 
}