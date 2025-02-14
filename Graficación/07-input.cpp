#include <iostream>

// cout << operador de inserción
// cin << operador de extracción

int main()
{
    std::string nombre;
    int edad;

    std::cout << "¿cual es tu edad? " << std::endl;
    std::cin >> edad;


    std::cout << "¿cual es tu nombre? " << std::endl;
    // std::cin >> nombre;
    std::getline(std::cin>>std::ws, nombre);






    std::cout << "Hola " << nombre << std::endl;
    std::cout << "tus años son: " << edad << std::endl;

    // return 0;
}