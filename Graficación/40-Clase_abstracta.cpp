#include <iostream>

using std::cout;
using std::string;

class Abstracta {
    public:
        virtual int suma() = 0; // = 0 es la notación que emplea C++ para definir funciones virtuales puras.
};

class DerivadaA : public Abstracta {
    public:
        // una posible implementación de la función suma.
        int suma() {
            return 2 + 2;
        }
};

class DerivadaB : public Abstracta {
    public:
        // otra implementación de la función suma.
        int suma() {
            return 3 + 3;
        }
};

int main() {
    DerivadaA objA;
    int resultado = objA.suma();
    cout << "sumaA: " << resultado << std::endl;

    DerivadaB objB;
    resultado = objB.suma();
    cout << "sumaB: " << resultado << std::endl;

    return 0;
}