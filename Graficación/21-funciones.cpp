#include <iostream>

// Declaración de función
void myFunction();

// El método principal
int main() {
  myFunction(); // llamar a la función
  return 0;
}

// Definición de la función
void myFunction() {
  std::cout << "Función ejecutandose" << std::endl;
}