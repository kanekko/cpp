#include <iostream>

using namespace std;

int main()
{
    int a;
    int *b = nullptr; // Se usa * para denotar un apuntador.

    a = 10;
    b = &a; // los apuntadores almacenan localidades de memoria

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;

    cout << "b: " << b << endl;
    cout << "*b: " << *b << endl;
}