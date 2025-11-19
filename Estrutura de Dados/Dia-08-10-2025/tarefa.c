#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tarefa.h"

Planner * CriarLista(int N) {

    Planner * P = (Planner *) malloc (sizeof(Planner));

    if (P == NULL) {
        printf("ERRO: não foi possivel alocar memória para o planner!\n");
        return NULL;
    }

    P->Capacidade = N; // A capacidade do planner é "N".
    P->Tamanho = 0; // Inicialmente, a lista de tarefas está vazia.
    P->Dados = (Tarefa *) malloc(N * sizeof(Tarefa)); // Alocar memória dinamicamente

    if (P->Dados == NULL) {
        printf("ERRO: não foi possivel alocar memória para o vetor de tarefas!\n");
        free(P);
        return NULL;
    }

    return P; // P é um enderço de memória, por exemplo, 

}

void DestruirLista(Planner * P) {
    if (P == NULL) return;
    free(P->Dados);
    free(P);
}
void AdicionarTarefa(Planner * P, Tarefa T) {

    if(P == NULL || P->Tamanho == P->Capacidade) return; //Verificar limites

    P->Dados[P->Tamanho] = T; // Copiando T no primeiro espaço vazio
    P->Tamanho++; // Atualizando o tamanho

}

int GerarHTMLTabela(Planner *Lista, char *CaminhoArquivo) {

    if (Lista == NULL || CaminhoArquivo == NULL) {
        printf("ERRO: parâmetros inválidos!\n");
        return 0;
    }

    FILE *arquivo = fopen(CaminhoArquivo, "w");
    if (arquivo == NULL) {
        printf("ERRO: não foi possível criar o arquivo HTML!\n");
        return 0;
    }

    fprintf(arquivo,
        "<!DOCTYPE html>\n"
        "<html lang='pt-br'>\n"
        "<head>\n"
        "    <meta charset='UTF-8'>\n"
        "    <meta name='viewport' content='width=device-width, initial-scale=1.0'>\n"
        "    <title>Planner de Tarefas</title>\n"
        "    <style>\n"
        "        body { font-family: Arial, sans-serif; background-color: #f5f5f5; margin: 20px; }\n"
        "        h1 { text-align: center; color: #333; }\n"
        "        table { width: 100%%; border-collapse: collapse; margin-top: 20px; }\n"
        "        th, td { border: 1px solid #ccc; padding: 10px; text-align: left; }\n"
        "        th { background-color: #4CAF50; color: white; }\n"
        "        tr:nth-child(even) { background-color: #f2f2f2; }\n"
        "    </style>\n"
        "</head>\n"
        "<body>\n"
        "    <h1>Lista de Tarefas</h1>\n"
        "    <table>\n"
        "        <tr>\n"
        "            <th>Título</th>\n"
        "            <th>Descrição</th>\n"
        "            <th>Data</th>\n"
        "            <th>Prioridade</th>\n"
        "        </tr>\n"
    );

    for (int i = 0; i < Lista->Tamanho; i++) {
        fprintf(arquivo,
            "        <tr>\n"
            "            <td>%s</td>\n"
            "            <td>%s</td>\n"
            "            <td>%s</td>\n"
            "            <td>%s</td>\n"
            "        </tr>\n",
            Lista->Dados[i].Titulo,
            Lista->Dados[i].Descricao,
            Lista->Dados[i].Data,
            Lista->Dados[i].Prioridade
        );
    }

    fprintf(arquivo,
        "    </table>\n"
        "</body>\n"
        "</html>\n"
    );

    fclose(arquivo);
    printf("Arquivo HTML '%s' gerado com sucesso!\n", CaminhoArquivo);
    return 1;
}