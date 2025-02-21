#include <iostream>

using std::cout;
using std::string;


class MyClass {          // La clase
    public:              // Especificador de acceso
        int myNum;       // Atributo (variable int)
        string myString; // Attribute (string variable)
};

int main() {
    MyClass myObj; // Crear un objeto de MyClass

    // Acceder a atributos y establecer valores
    myObj.myNum = 15;
    myObj.myString = "Aquí va un texto";

    // Imprimir valores de atributos
    cout << myObj.myNum << "\n";
    cout << myObj.myString << "\n";
    
    return 0;
}