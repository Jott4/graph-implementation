
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct struct_grafo *Grafo;

Grafo cria_grafo(bool is_digraph);

void libera_grafo(Grafo grafo);

void insere_vertice(Grafo grafo, char *nome);

int nome_por_id(Grafo grafo, char *nome);

void insere_aresta(Grafo grafo, char *origem, char *destino, int peso);

void imprime_peso(Grafo grafo, char *origem, char *destino);

bool possui_laco(Grafo grafo, char *nome);

void imprime_grau(Grafo grafo, char *nome);

void imprime_matriz(Grafo grafo);

void desenha_grafo(Grafo grafo);

#define MAX_VERTICES 100
#define MAX_ARESTAS 100
#define MAX_NOME 50
