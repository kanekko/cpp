#include<cmath>
#include <iomanip>
#include <iostream>

int main()
{
    // Primera implementación 
    double pi = 3.1415926535897932384626433;
    double radio = 10;
    double perímetro = 2 * pi * radio;

    std::cout << "Perímetro: " << std::setprecision(50) << perímetro << " unidades \n";

    pi = 6.2830; // reasignación de variable
    perímetro = 2 * pi * radio;
    std::cout << "Nuevo perímetro: " << std::setprecision(50) << perímetro << " unidades \n";


    // Segunda implementación 
    const double PICONST = 3.1415926535897932384626433;
    double área = PICONST * pow(radio, 2) ;

    // No es posible hacer la reasignación:
    // PICONST = 6.2830;

    std::cout << "Perímetro constante: " << std::setprecision(50) << área << " unidades";
}