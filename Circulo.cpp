#include <iostream>

const double PI = 3.14;

class Circulo
{

private:
    double d;

public:
    Circulo(double d)
    {
        this->d = d;
    }

private:
    double getArea() { return PI * (getRaio() * getRaio()); }

private:
    double getDistancia2Circ(double raio1, double raio2) { return raio1 + raio2; }

private:
    double getCircunferencia() { return PI * (getRaio() * 2); }

public:
    double getRaio() { return d / 2; }

public:
    void aumentarRaio(double perc) { d = ((perc / 100) * getRaio() + getRaio()) * 2; }

public:
    void printArea() { std::cout << getArea(); };

public:
    void printRaio() { std::cout << getRaio(); }
};

int main(void)
{

    Circulo *c = new Circulo(20);
    c->printArea();
    std::cout << "\n";
    c->printRaio();
}