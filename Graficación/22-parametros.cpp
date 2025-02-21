#include <iostream>

// 1. Parámetros o argumentos
void myFunction(std::string fname) {
  std::cout << "Hola " << fname << std::endl;
}

// 2. Parámetros por default
void myFunction2(std::string fname = "Desconocido") {
  std::cout << "Hola " << fname << std::endl;
}

// 3. Multiples parámetros
void myFunction3(std::string fname, int age) {
  std::cout << "Hola " << fname << ", tienes " << age << " años. \n";
}

// 4. Valores de retorno
int myFunction4(int x) {
  return 5 + x;
}

int myFunction5(int x, int y) {
  return x + y;
}


int main() {
  // 1. Parámetros o argumentos
    myFunction("José");
    myFunction("Pepe");
    myFunction("Brenda");

  // 2. Parámetros por default
    myFunction2();

  // 3. Multiples parámetros
    myFunction3("José", 10);
    myFunction3("Pepe", 20);
    myFunction3("Brenda", 30);

  // 4. Valores de retorno
    std::cout << myFunction4(3) << std::endl;

    std::cout << myFunction5(3, 4) << std::endl;

    int z = myFunction5(5, 3);
    std::cout << z << std::endl;


    return 0;
}
