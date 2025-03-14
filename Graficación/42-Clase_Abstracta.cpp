#include <iostream>

class Forma {
    public:
        // Función virtual pura
        virtual void dibujar()  = 0; // Esto convierte a Forma en una clase abstracta
};

class Circulo : public Forma {
    public:
        void dibujar()  {
            std::cout << "Dibujando un Círculo" << std::endl;
        }
};

class Cuadrado : public Forma {
    public:
        void dibujar()  {
            std::cout << "Dibujando un Cuadrado" << std::endl;
        }
};

int main()
{
    Circulo c;
    Cuadrado q;

    // Punteros a la clase base abstracta
    Forma *formas[2] = {&c, &q};

    for (int i = 0; i < 2; ++i) {
        formas[i]->dibujar();
    }

    return 0;
}
