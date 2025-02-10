#include <iostream>
using namespace std;

/*
 * Operaciones aritméticas.
 */

int main()
{
	int dato1, dato2, dato3, resultado;

	dato1 = 30;
	dato2 = 20;
	dato3 = 10;

	// Suma
	resultado = dato1 + dato2 + dato3;
	cout << dato1 << " + " << dato2 << " + " << dato3 << " = " << resultado << endl;

	// Resta
	resultado = dato1 - dato2 - dato3;
	cout << dato1 << " - " << dato2 << " - " << dato3 << " = " << resultado << endl;

	// Producto
	resultado = dato1 * dato2 * dato3;
	cout << dato1 << " * " << dato2 << " * " << dato3 << " = " << resultado << endl;

	// División
	resultado = dato1 / dato2 / dato3;
	cout << dato1 << " / " << dato2 << " / " << dato3 << " = " << resultado << endl;
}
