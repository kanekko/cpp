#include <iostream>

// variable global x
int x = 5;

void myFunction()
{
    // Referencia a la variable global
    std::cout << x << "\n";

    // 2. Variable local con el mismo nombre que la variable global (x)
    // int x = 10;
    // std::cout << "variable x local: " << x << "\n"; // Se refiere a la variable local x

    // 3. Las variables globales se pueden modificar.
    std::cout << "Variable global modificada: " << ++x << "\n"; // Incrementa el valor de x en 1 e imprimelo
}

int main()
{
    myFunction();

    // Referencia a la variable global
    std::cout << "valor dentro de main: " << x << std::endl;
    return 0;
}