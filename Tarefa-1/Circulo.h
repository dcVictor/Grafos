#ifndef CIRCULO_H

#define CIRCULO_H

class Circulo {
public:
    Circulo(double raio);
    
    double calcula_perimetro();
    double calcula_area();


    void imprime_area();
    void imprime_perimetro();
private:
    double raio_;
};

#endif /* CIRCULO_H */
