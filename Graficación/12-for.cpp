#include <iostream>
// using namespace std;

int main()
{
    // // for simple
    // for (int i = 0; i < 5; i++) {
    //    std::cout << i << "\n";
    // }

    // for anidado
    // for (int i = 1; i <= 2; ++i) {
    //     std::cout << "Exterior: " << i << "\n"; // Se ejecuta 2 veces

    //     // Bucle interior
    //     for (int j = 1; j <= 3; ++j) {
    //         std::cout << " Interno: " << j << "\n"; // Se ejecuta 6 veces (2 * 3)
    //     }
    // }

    // // otro ejemplo
    // for (int i = 0; i <= 4; i++) {
    //     for (int j = 0; j <= 4; j++) {
    //         std::cout << "*" << " ";
    //     }
    //     std::cout<<std::endl;
    // }

    // // for each
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        std::cout << i << "\n";
    }


    return 0;

}