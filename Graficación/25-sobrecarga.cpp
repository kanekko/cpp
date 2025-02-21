#include <iostream>

// 1. Funciones normales
/*
int plusFuncInt(int x, int y)
{
    return x + y;
}

double plusFuncDouble(double x, double y)
{
    return x + y;
}
*/

// 2. Funciones sobrecargadas
int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}


int main()
{
    // 1.
    // int myNum1 = plusFuncInt(8, 5);
    // double myNum2 = plusFuncDouble(4.3, 6.26);

    // 2.
    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);

    std::cout << "Int new : " << myNum1 << std::endl;
    std::cout << "Double new : " << myNum2 << std::endl;

    return 0;
}