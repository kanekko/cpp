#include <iostream>

using std::cout;
using std::string;

class MyClass {           // La clase
    public:               // Especificador de acceso
        void myMethod() { // Método/función definido dentro de la clase
            cout << "Hello World!";
        }
};

int main() {
    MyClass myObj;    // Crear un objeto de MyClass
    myObj.myMethod(); // Llama al método
    
    return 0;
}