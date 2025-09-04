#include "Grafo.h"
#include <iostream>

using namespace std;

Grafo::Grafo(int num_vertices){

    num_vertices_ = num_vertices;
    int num_arestas_ = 0;

    matriz_adj_.resize(num_vertices);

    for (int i = 0; i < num_vertices; i++){
        matriz_adj_[i].resize(num_vertices, 0);
    }

};


int Grafo::num_vertices(){
    return num_vertices_;
};

int Grafo::num_arestas(){
    return num_arestas_;
};

bool Grafo::tem_aresta(Aresta e){
    if (matriz_adj_[e.v1][e.v2] != 0){
        return true;
    }
    else{
        return false;
    }
}
 
void Grafo::insere_aresta(Aresta e){
    if (!tem_aresta(e) && e.v1 != e.v2){
        matriz_adj_[e.v1][e.v2] = 1;
        matriz_adj_[e.v2][e.v1] = 1;
        num_arestas_++;
    }

}

void Grafo::remove_aresta(Aresta e){
    if (tem_aresta(e)){
        matriz_adj_[e.v1][e.v2] = 0;
        matriz_adj_[e.v2][e.v1] = 0;
        num_arestas_--;
    }
}

void Grafo::imprime(){
    for (int i = 0; i < num_vertices_; i++){
        cout << i << ": ";
        for (int j = 0; j < num_vertices_; j++){
            if (matriz_adj_[i][j] != 0){
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

void Grafo::free(){
    matriz_adj_.clear();
}
   