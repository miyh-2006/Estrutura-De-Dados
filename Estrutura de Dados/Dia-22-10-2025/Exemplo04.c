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
    C -> Proximo = D;

    printf ("A - %X\t %d\t %X\n", A, A -> Chave, A -> Proximo);
    printf ("B - %X\t %d\t %X\n", B, B -> Chave, B -> Proximo);
    printf ("C - %X\t %d\t %X\n", C, C -> Chave, C -> Proximo);
    printf ("D - %X\t %d\t %X\n", D, D -> Chave, D -> Proximo);


    // 2) Como verificar se C é o último elemento da lista?

    if (C -> Proximo == NULL) printf("C é o último elemento da lista. \n");
    else printf("Existe item depois do C. \n");


    // 3) Dois itens diferentes podem ter o mesmo "Proximo"?
      // Sim, mas não teriamos uma lista encadeada.

    Item * X = (Item *) malloc(sizeof(Item));
    Item * Y = (Item *) malloc(sizeof(Item));

    X -> Chave = 20;
    Y -> Chave = 45;

    X -> Proximo = B;
    Y -> Proximo = B;

    printf ("X - %X\t %d\t %X\n", X, X -> Chave, X -> Proximo);
    printf ("Y - %X\t %d\t %X\n", Y, Y -> Chave, Y -> Proximo);

    //4) Verificando os encadeamentos.

    printf ("A - %X\t %d\t %X\n", A, A -> Chave, A -> Proximo);
    printf ("B - %X\t %d\t %X\n", B, B -> Chave, B -> Proximo);
    printf ("C - %X\t %d\t %X\n", C, C -> Chave, C -> Proximo);
    printf ("D - %X\t %d\t %X\n", D, D -> Chave, D -> Proximo);


    // 1) D -> Proximo = NULL pois D é o último elemento da lista.
    // 2) Qual o valor de A -> Proximo -> Proximo -> Chave? Resposta: 36
    

    printf("\n\n%d\n",A -> Proximo -> Proximo -> Chave);
}