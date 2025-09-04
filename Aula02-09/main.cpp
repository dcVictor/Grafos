#include "Grafo.h"
#include <iostream>

using namespace std;

int main() {
    try {
        Grafo grafo = Grafo(6);

        grafo.insere_aresta(Aresta(0, 1));
        grafo.insere_aresta(Aresta(0, 2));
        grafo.insere_aresta(Aresta(1, 2));
        grafo.insere_aresta(Aresta(1, 3));
        grafo.insere_aresta(Aresta(2, 4));
        grafo.insere_aresta(Aresta(3, 4));
        grafo.insere_aresta(Aresta(4, 5));  

        grafo.imprime();
    }
    catch (const exception &e) {
        cerr << "exception: " << e.what() << "\n";
    }

    return 0;
}
