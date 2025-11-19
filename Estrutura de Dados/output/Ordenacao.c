#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 100

void InsertionSort(int * V, int N);
void ExibirVetor(int * V, int N);

//Observação:

// * V (Passagem de parâmetro por REFERÊNCIA)
// N (passagem de parâmetro por VALOR)

int main() {

    system("cls");

    int Conjunto[100];
   for(int i = 0; i < TAMANHO; i++) Conjunto[i] = rand() % 1000;

clock_t T0 = clock();
    InsertionSort(Conjunto, TAMANHO);
clock_t TF = clock();

    ExibirVetor(Conjunto, TAMANHO);

    double TempoCPU = (double) (TF - T0) / CLOCKS_PER_SEC;
    printf("Tempo de CPU: %f\n", TempoCPU);

}

// Implementação das funções "auxiliares"

void InsertionSort(int * V, int N) {

    int Chave; // É o primeiro elemento da parte não-ordenada
    int i;
    int j;

    for(i = 1; i < N; i++) {

        Chave =V[i];
        j = i - 1;

        while (V[j] > Chave && j >= 0) {
            V [j + 1] = V[j];
            j--;
        }

        V[j + 1] = Chave;
        ExibirVetor(V, N);
    }

}

void ExibirVetor(int * V, int N) {
    int i;
    for(i = 0; i < N; i++) printf("%d\t", V[i]);
    printf("\n");


}