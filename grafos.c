#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "grafos.h"

struct struct_grafo
{
  char nomes_vertices[MAX_VERTICES][MAX_NOME];
  int matriz[MAX_VERTICES][MAX_VERTICES];
  int n_vertices;
  bool is_digraph;
};

Grafo cria_grafo(bool is_digraph)
{
  Grafo g = (Grafo)malloc(sizeof(struct struct_grafo));

  if (g != NULL)
  {
    g->is_digraph = is_digraph;
    g->n_vertices = 0;
    for (int i = 0; i < MAX_VERTICES; i++)
    {
      for (int j = 0; j < MAX_VERTICES; j++)
      {
        g->matriz[i][j] = -1;
      }
    }
  }

  return g;
}

void libera_grafo(Grafo grafo)
{
  free(grafo);
}

void insere_vertice(Grafo grafo, char *nome)
{
  if (grafo->n_vertices < MAX_VERTICES)
  {
    strcpy(grafo->nomes_vertices[grafo->n_vertices], nome);
    grafo->n_vertices++;
  }
}

int nome_por_id(Grafo grafo, char *nome)
{
  int id = -1;
  for (int i = 0; i < grafo->n_vertices; i++)
  {
    if (strcmp(grafo->nomes_vertices[i], nome) == 0)
    {
      id = i;
      break;
    }
  }
  return id;
}

void insere_aresta(Grafo grafo, char *origem, char *destino, int peso)
{

  int id_origem = nome_por_id(grafo, origem);
  int id_destino = nome_por_id(grafo, destino);

  if (id_origem != -1 && id_destino != -1)
  {
    grafo->matriz[id_origem][id_destino] = peso;
    if (!grafo->is_digraph)
    {
      grafo->matriz[id_destino][id_origem] = peso;
    }
  }
}

void imprime_peso(Grafo grafo, char *origem, char *destino)
{

  int id_origem = nome_por_id(grafo, origem);
  int id_destino = nome_por_id(grafo, destino);

  if (id_origem != -1 && id_destino != -1)
  {
    printf("%d\n", grafo->matriz[id_origem][id_destino]);
  }
}

bool possui_laco(Grafo grafo, char *nome)
{
  int id = nome_por_id(grafo, nome);
  if (id != -1)
  {
    for (int i = 0; i < grafo->n_vertices; i++)
    {
      if (grafo->matriz[id][i] != -1)
      {
        return true;
      }
    }
  }
  return false;
}

void imprime_grau(Grafo grafo, char *nome)
{
  int id = nome_por_id(grafo, nome);
  if (id != -1)
  {
    int grau = 0;
    for (int i = 0; i < grafo->n_vertices; i++)
    {
      if (grafo->matriz[id][i] != -1)
      {
        grau++;
      }
    }
    printf("%d\n", grau);
  }
}