#ifndef TAREFA_H
#define TAREFA_H

#define TAM_TITULO 96
#define TAM_NOME 48

#define A_FAZER 0
#define EM_ANDAMENTO 1
#define FEITO 2

//Estrutura do ITEM tarefa

typedef struct {
   char Titulo [TAM_TITULO];
   char Responsavel [TAM_NOME];
   int Status;
   float Progresso;
   int Avaliacao;
} Tarefa;

// Estrutura da LISTA (moldura da Lista)

typedef struct  {
    Tarefa * Dados;
    int Tamanho;
    int Capacidade;
} Planner;

// Prototipo das operações que lidam com o TAD Lista.

Planner * CriarLista(int N); // O retorno é um endereço de memória de um Planner
void DestruirLista(Planner * P); // Liberar memória alocada para P
void AdicionarTarefa(Planner * P, Tarefa T);

#endif