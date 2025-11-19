#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "quicksort.h"

#define TAMANHO 10000

int main() {

    int Exemplo[] = {3, 6, 4, 5, 1, 7, 2};
    int Tamanho = sizeof(Exemplo) / sizeof(int);

    //Trocar os números 6 e 1 de lugar
    //QuickSort(Exemplo, 0, Tamanho -1);
    //ExibirVetor(Exemplo, Tamanho);
    

    int Vetor[TAMANHO];
    for ( int i = 0; i < TAMANHO; i++) Vetor[i] = rand () % 1000;

    clock_t T0 = clock();
    QuickSort(Exemplo, 0, Tamanho -1);
    clock_t TF = clock();

    double TempoCPU = (double) (TF - T0) / CLOCKS_PER_SEC;
    printf("Tempo de CPU: %.3f\n", TempoCPU);
}