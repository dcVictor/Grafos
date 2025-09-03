#include "Grafo.h"
#include <iostream>

using namespace std;

Grafo::Grafo(int num_vertices){

    num_vertices_ = num_vertices;
    
    matriz_adj_.resize(num_vertices);

    for (int i = 0; i < num_vertices; i++){
        matriz_adj_[i].resize(num_vertices, 0);
    }

}


   