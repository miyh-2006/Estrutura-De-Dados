#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// rand(): gera um numero pseudo-aleatorio.
//srand(): estabelece um ponto de partida para gerar número.

#define TAMANHO 50000

int main () {

    srand(time(NULL));
    int V[TAMANHO];
    for(int i = 0; i < TAMANHO; i++) V[i] = rand () % 100;

    clock_t T0 = clock();
    printf("%d\n\n", T0);
    for(int i = 0; i < TAMANHO; i++) printf ("%d\t", V[i]);
    clock_t TF = clock();

    double TempoCPU = (TF - T0) / CLOCKS_PER_SEC;

    printf("\nInicio: %d", T0);
    printf("\nFim: %d", TF);
    printf("\nTempo de CPU: %f", TempoCPU);
    
}