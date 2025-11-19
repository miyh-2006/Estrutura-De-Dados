#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

int C;
int M;

void SelectionSort(int * V, int N); //Ordenar o vetor "V" de tamanho

int main () {

C = 0;
M = 0;

    int V [TAMANHO];
    srand(time(NULL));
    for(int i = 0; i < TAMANHO; i++) V[i] = rand() % 100;

    clock_t T0 = clock ();
    SelectionSort(V, TAMANHO);
    clock_t TF = clock();

    for( int i = 0; i < TAMANHO; i++) printf ("%d\n\t", V[i]);
    printf("\nNumero de ifs: %d", C);
    printf("\nNumero de atribuicoes: %d", M);
    printf("\nTempo de CPU: %f", ((double)(TF - T0)) / CLOCKS_PER_SEC);


            }
            void SelectionSort(int * V, int N) {
            for(int i = 0; i < N - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < N; j++) {
                C++;
                if(V[j] < V[minIndex]) minIndex = j;
            M = M + 3;
            int temp = V[minIndex];
            V[minIndex] = V[i];
            V[i] = temp;
        }
    }
}