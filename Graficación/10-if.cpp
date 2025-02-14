#include <iostream>

int main()
{
    // if
    int x = 20;
    int y = 18;
    if (x > y) {
        std::cout << "x es mayor que y" << std::endl;
    }

    // if-else
    int time = 20;

    if (time < 18) {
        std::cout << "menor que 20"<< std::endl;
    } else {
        std::cout << "mayor que 20"<< std::endl;
    }

    // else-if
    int resultado = 30;

    if (resultado < 10) {
        std::cout << "resultado menor que 10"<< std::endl;
    } else if (resultado < 20) {
        std::cout << "resultado menor qu 20"<< std::endl;
    } else {
        std::cout << "cualquier resutlado"<< std::endl;
    }

    // operador ternario
    //  variable = (condition) ? expressionTrue : expressionFalse; 

    int timeNew = 20;

    if (timeNew < 18) {
        std::cout << "Good day."<< std::endl;
    } else {
        std::cout << "Good evening."<< std::endl;
    }

    std::string result = (timeNew < 18) ? "Good day..." : "Good evening...";
    std::cout << result<< std::endl;

    // return 0;
}