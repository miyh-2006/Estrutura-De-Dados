#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "quicksort.h"

void ExibirVetor(int * V, int N) {
    for(int i = 0; i < N; i++) printf("%d\t", V[i]);
    printf("\n");
}

void TrocarElemento(int * A, int * B) {
    int temp = * A;
    * A = * B;
    * B = * temp;
}

    int Particao(int * V, int Inf, int Sup) {
        int Pivot = V[ (Inf + Sup) / 2];
        int i = Inf; //Percorrer o vetor a partir do início
        int j = Sup; // Percorrer o vetor a partir do final

        while (i <= j) {
            while(V[i] < Pivot) i++;
            while(V[j] > Pivot) j--;
            if(i <= j) {
                TrocarElemento(&V[i], &V[j]);
                i++;
                j--;
            }

            void QuickSort(int * V, int Inf, int Sup) {
                if (Inf < Sup) {
                    int P = Particao(V, Inf, Sup); //Calcular posição do pivo
                    QuickSort(V, Inf, P - 1); //Ordenar partição da esquerda
                    QuickSort(V, P, Sup); // Ordenar partição da direita
                }
            }
        }

        return i;

    }