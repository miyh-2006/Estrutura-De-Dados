#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main () {

    system("cls");

    Pilha * Stack = criarPilha(); //Stack é o endereço da pilha

    empilhar(Stack, criarItem(12));
    empilhar(Stack, criarItem(17));
    empilhar(Stack, criarItem(25));

    printf("%d\n", Stack -> Topo -> Chave);
    
    empilhar(Stack, criarItem(40));
    empilhar(Stack, criarItem(90));

    printf("%d\n", Stack -> Topo -> Chave);

}