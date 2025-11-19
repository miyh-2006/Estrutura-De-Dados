#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

Item * criarItem(int Chave) {

    Item * I = (Item *) malloc(sizeof(Item));
    if(I == NULL) {
        printf("ERRO: não há espaço de memória para mais um item!\n");
        return NULL;
    }

    I -> Chave = Chave;
    I -> Anterior = NULL;
    return I;
}

Pilha * criarPilha() {

    Pilha * P = (Pilha *) malloc(sizeof(Pilha));
    if (P == NULL) {
        printf("ERRO: não há memória para a pilha!\n");
        return NULL;
    }

    P -> Tamanho = 0;
    P -> Topo = NULL;

    return P;
}
void empilhar(Pilha * P, Item * I){

    if(I == NULL) {
        printf("ERRO: item nulo!\n");
        return;
    }

    I -> Anterior = P-> Topo; // Inserido I acima do (antigo) topo da pilha
    P -> Topo = I; // Atualizando o topo da pilha para I
    P-> Tamanho++;
}

void desempilhar(Pilha * P) {

    if(P-> Topo = NULL) {
        printf("ERRO: stack underflow! \n");
        return;
    }


    Item * I = P -> Topo;
    P -> Topo = I -> Anterior;
    free(I);
    P->Tamanho--;
}