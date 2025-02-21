#include <iostream>

void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum = 10;
    int secondNum = 20;

    std::cout << "Varoles antes del paso por referencia: " << "\n";
    std::cout << firstNum << " , " << secondNum << "\n";

    // Llamado a la función, que cambiará los valores de firstNum y secondNum
    swapNums(firstNum, secondNum);

    std::cout << "Después del intercambio: " << "\n";
    std::cout << firstNum << " , " << secondNum << "\n";

    return 0;
}