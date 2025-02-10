#include <iostream>
using namespace std;

/*
 * Operaciones aritméticas.
 */

int main()
{
	int dato1, dato2, resultado;

	dato1 = 20;
	dato2 = 10;

	// Suma
	resultado = dato1 + dato2;
	cout << dato1 << " + " << dato2 << " = " << resultado << endl;

	// Resta
	resultado = dato1 - dato2;
	cout << dato1 << " - " << dato2 << " = " << resultado << endl;

	// Producto
	resultado = dato1 * dato2;
	cout << dato1 << " * " << dato2 << " = " << resultado << endl;

	// División
	resultado = dato1 / dato2;
	cout << dato1 << " / " << dato2 << " = " << resultado << endl;
}
