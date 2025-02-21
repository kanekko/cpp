#include <iostream>

using std::cout;
using std::string;

/*
 * 1. Constructores básicos
 */

class MyClass {       // La clase
public:              // Especificador de acceso
    MyClass() {      // Constructor
        cout << "Hello World!";
    }
};

// int main()
// {
//     MyClass myObj; // Crea un objeto de MyClass (esto llamará al constructor)
//     return 0;
// }

/*
 * 2. Constructores con parámetros.
 
class Car {       // La clase
    public:           // Especificador de acceso
        string brand; // Attribute
        string model; // Atributo
        int year;     // Atributo
        Car(string x, string y, int z) { // Constructor con parámetros
            brand = x;
            model = y;
            year = z;
        }
};
*/

/*
int main() {
    // Crea objetos Car y llama al constructor con diferentes valores
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Valores de impresión
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
*/

/*
 * 3. Los constructores también se pueden definir fuera de la clase
 */
class Car {                         // La clase
    public:                             // Especificador de acceso
        string brand;                   // Atributo
        string model;                   // Atributo
        int year;                       // Atributo
        Car(string x, string y, int z); // Declaración del constructor
};

// Definición del constructor fuera de la clase
Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main() {
    // Crea objetos Car y llama al constructor con diferentes valores
    Car carObj1("BMW", "X5", 1999);
    Car carObj2("Ford", "Mustang", 1969);

    // Valores de impresión
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    
    return 0;
}