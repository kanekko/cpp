#include <iostream>

// 2. Creamo un namespace
namespace first{
    int x = 1;
    int y = 1;
}

// 3. Creamos un nuevo namespace con una misma variable
namespace second{
    int x = 2;
}

int main()
{   
    // 1. No es posible hacer redeclaración:
    /*
    int x = 0;
    int x = 1;
    */

    // 4. Podemos mandar a imprimir variables de NS especificos
    /*
    int x = 0;
    std::cout << "x = " << x << "\n";
    std::cout << "x = " << first::x; // :: es el operador de resolución de ambitos
    */

    // 5. podemos usar using para invocar el bloque completo en nuestra función
    // using namespace first;
    // std::cout << "x = " << x << "\n";
    // std::cout << "x = " << second::x;

    // 6. podemos invocar namespace nativos de c++
    // using namespace std;
    // cout << "x = " << first::x;

    // 7. podemos importat bibliotecas especificas
    using std::cout;
    using std::string;

    string nombre = "Canek";
    cout << "hola " << nombre;


    // return 0;
}