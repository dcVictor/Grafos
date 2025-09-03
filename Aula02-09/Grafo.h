#ifndef GRAFO_H


#include <vector>

class Grafo {
public:
    //Constrói o grafo com o número de vertices
    // recebido numa aresta

    Grafo(int num_vertices);
    
   
private:
    int num_vertices_;

    std::vector<std::vector<int>> matriz_adj_;
};

#endif /* GRAFO_H */
