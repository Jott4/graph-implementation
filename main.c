#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "grafos.h"

int main()
{
    Grafo g1 = cria_grafo(false);

    /*
        insere_vertice(g1, "marina");
        insere_vertice(g1, "joao");
        insere_vertice(g1, "tadeu");
        insere_vertice(g1, "maria");
        insere_vertice(g1, "jose");
        insere_vertice(g1, "mariana");

        print_matriz(g1);

        insere_aresta(g1, "marina", "joao", 2);
        insere_aresta(g1, "joao", "tadeu", 3);
        insere_aresta(g1, "joao", "maria", 4);
        insere_aresta(g1, "maria", "jose", 5);
        insere_aresta(g1, "jose", "mariana", 6);
        insere_aresta(g1, "maria", "mariana", 7);

        imprime_peso(g1, "joao", "maria");
        imprime_peso(g1, "jose", "mariana");

        print_matriz(g1);

        imprime_grau(g1, "marina");
        imprime_grau(g1, "jose");
        imprime_grau(g1, "maria");

        desenhe_grafo(g1);

        if (sao_adjacentes(g1, "joao", "maria"))
            printf("joao e maria sao adjancentes\n");

        if (sao_adjacentes(g1, "tadeu", "mariana"))
            printf("tadeu e mariana sao adjancentes\n");

        imprime_adjacentes(g1, "joao");
        imprime_adjacentes(g1, "jose");

        libera_grafo(g1);

        printf("Ok\n");
        */
    return 0;
}
