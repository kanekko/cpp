#include <iomanip>
#include <iostream>

int main()
{
    
    // 1. Declaración de una variable
    int x;
    // 2. Asignación de la variable
    x = 1;
    // 3. Declaración y asignación en una sola línea
    int y = 2;

    int suma = x + y;

    // std::cout << x << " " << y << "\n";
    // std::cout << suma;

    // 4. Tipos de datos enteros
    int día = 7;
    int mes = 2;
    int año = 2025;

    // 5. Tipo de dato float/double
    // Cuidado: int decimal = 3.1415;
    float gravitación =  9.8; // m/s2
    float piFloat = 3.1415926535897932384626433;
    double piDouble = 3.1415926535897932384626433;

    std::cout << std::setprecision(50) << piFloat << "\n";
    // std::cout << std::setprecision(50) << piDouble << "\n";
    std::cout << piDouble << "\n";
    
    // 6. Tipo de dato char
    char letraA = 'a';
    // std::cout << letraA;

    // 7. Tipo de dato Strin
    // string nombre = "Canek";
    std::string nombre = "Canek";
    std::cout << "Buenas tardes " << nombre << " =) \n";

    // 8. Tipo de dato Boolean
    bool interruptor = false; //0
    // std::cout << interruptor << "\n";
    
    interruptor = true;
    // std::cout << interruptor;


    // return 0;
}