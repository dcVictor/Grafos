#include "Circulo.h"
#include <iostream>

using namespace std;

    typedef struct No {
                int raio;
                struct No* proximo;
            } No;
            
    typedef struct pilha {
                No* topo;
            } Pilha;

    
    void push(Pilha* p, int raio) {
                No* novo = new No;
                novo->raio = raio;
                novo->proximo = p->topo;
                p->topo = novo;
            };


    void pop(Pilha* p) {
                if (p->topo != NULL) {
                    No* temp = p->topo;
                    p->topo = p->topo->proximo;
                    cout << "Raio removido: " << temp->raio << endl;
                    delete temp;
                }
            };
            

int main() {
    try {
        int x;
        int raio;
        int raio2;
        Pilha* p = (Pilha*)malloc(sizeof(Pilha));
         p->topo = NULL;
         
        


        cout << "Digite o raio do circulo 1: ";
        cin >> raio;

        push(p, raio);

        cout << "Digite o raio do circulo 2: ";
        cin >> raio2;

        push(p, raio2);
    

        cout << "Digite um valor para apagar um elemento da pilha: ";
        cin >> x;

        pop(p);

        
        cout << "Digite outro valor para apagar um elemento da pilha: ";
        cin >> x;

        pop(p);



        Circulo circulo(raio);
        Circulo circulo2(raio2);

        circulo.imprime_area();
        circulo.imprime_perimetro();

        circulo2.imprime_area();
        circulo2.imprime_perimetro();

        cout << "Obrigado por participar! :> (Digite 0 para sair)";
        cin >> raio;
    }
    catch (const exception &e) {
        cerr << "exception: " << e.what() << "\n";
    }

    return 0;
}
