#include <iostream>

void myFunction()
{
    // Variable local que pertenece a myFunction
    int x = 5;

    // imprimir la variable x
    std::cout << x << std::endl;
}

int main()
{
    myFunction();

    // ERROR:
    // Imprime la variable x en la función principal
    // cout << x;

    return 0;
}