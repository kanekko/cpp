#include <iostream>

using std::cout;
using std::string;

class MyClass {          // La clase
    public:              // Especificador de acceso
        void myMethod(); // Declaración de método/función
        void myMethod2(string nombre); // Agregando parametros
};

// Definición de método/función fuera de la clase
void MyClass::myMethod()
{
    cout << "Hello World!" << std::endl;
}

void MyClass::myMethod2(string name)
{
    cout << "Hello " << name << std::endl;
}

int main()
{
    MyClass myObj;    // Crear un objeto de MyClass

    myObj.myMethod(); // Llama al método
    myObj.myMethod2("Canek");

    return 0;
}