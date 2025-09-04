#ifndef GRAFO_H

#include "Aresta.h"
#include <vector>

class Grafo {
public:
    //Constrói o grafo com o número de vertices
    // recebido numa aresta

    Grafo(int num_vertices);
    
    int num_vertices();
    int num_arestas();

    bool tem_aresta(Aresta e);
    void insere_aresta(Aresta e);
    void remove_aresta(Aresta e);
    void imprime();
    void free();

private:
    int num_vertices_;
    int num_arestas_;

    std::vector<std::vector<int>> matriz_adj_;
};

#endif /* GRAFO_H */
