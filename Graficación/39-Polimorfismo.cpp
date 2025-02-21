#include <iostream>

using std::cout;
using std::string;

// Clase base
class Animal {
    public:
        void animalSound()
        {
            cout << "El animal hace un sonido \n";
        }
};

// Clase derivada
class Dog : public Animal {
    public:
        void animalSound()
        {
            cout << "El perro dice: guau guau \n";
        }
};

// Clase derivada
class Cat : public Animal {
    public:
        void animalSound()
        {
            cout << "El gato dice: miauu \n";
        }
};

int main() {
    Animal myAnimal;
    Dog myDog;
    Cat myCat;

    myAnimal.animalSound();
    myDog.animalSound();
    myCat.animalSound();

    return 0;
}