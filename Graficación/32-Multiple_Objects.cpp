#include <iostream>

using std::cout;
using std::string;

// Crea una clase Car con algunos atributos
class Car {
    public:
        string brand;
        string model;
        int year;
};

int main()
{
    // Crear un objeto de Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Crea otro objeto de Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Imprimir valores de atributos
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    
    return 0;
}