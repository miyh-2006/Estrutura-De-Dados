#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tarefa.h"

int main () {

    Tarefa T1 = {"Entrega do relatorio do projeto de BD", "Ana Paula", EM_ANDAMENTO, 0.75, 4};
    Tarefa T2 = {"Revisao do codigo do sistema", "Fernando", FEITO, 0.30, 5};
    
    
    Planner * UCB = CriarLista(2000);
    
    AdicionarTarefa(UCB, T1);
    AdicionarTarefa(UCB, T2);

    for(int i = 0; i < UCB->Tamanho; i++) printf("%d\t%s\n", i, UCB->Dados[i].Titulo);

    free(UCB);
    
}