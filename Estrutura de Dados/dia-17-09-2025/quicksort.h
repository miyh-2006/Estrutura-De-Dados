#ifndef QUICKSORT_H
#define QUICKSORT_H

void ExibirVetor(int * V, int N);
void TrocarElemento(int * A, int * B);

// Funções que implementam o algoritmo quicksort

int Particao(int * V, int Inf, int Sup);
void QuickSort(int * V, int Inf, int Sup);

#endif