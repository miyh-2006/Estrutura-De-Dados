#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    int Chave;
    struct Item * Proximo;
} Item;

Item * CriarItem  (int Chave);
void ExibirLista (Item * Inicio);

void InserirItem (Item * Inicio, Item * I, int Posicao);
void ExcluirItem (Item * Inicio, int Posicao);

int main () {

    system("cls");

    Item * A = CriarItem(25);
    Item * B = CriarItem(36);
    Item * C = CriarItem(50);
    Item * D = CriarItem(64);
    
    // Construindo a lista ENCADEADA A, B, C, D.

    A -> Proximo = B;
    B -> Proximo = C;
    C -> Proximo = D; 

    ExibirLista(A);

    // Inserir o item P, de chave 75, entre os itens B e C.

    Item * P = CriarItem(75);
    B ->Proximo = P;
    P ->Proximo = C;

    ExibirLista(A);

    // Excluir o item B da lista

    A ->Proximo = B ->Proximo;
    free(B);

    ExibirLista(A);

}

Item * CriarItem( int Chave) {
    Item * X = (Item *) malloc(sizeof(Item));
    X ->Chave = Chave;
    X ->Proximo = NULL;
    return X;
}

void ExibirLista(Item * Inicio) {

    Item * X = (Item *) malloc (sizeof(Item));
   printf ("\n");

   for (X = Inicio; X != NULL; X = X->Proximo){
    printf("%X\t %d\t 5=%X\n", X, X->Chave, X->Proximo);
   }
}