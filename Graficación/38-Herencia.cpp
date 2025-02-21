#include <iostream>

using std::cout;
using std::string;

/*
 * 1. Herencia simple
 */
/*
// clase base
class Vehicle {
    public:
        string brand = "Ford";
        void bocinazo() {
            cout << "tuu! \n";
        }
};

// clase que hereda de la clase base
class Car : public Vehicle {
    public:
        string model = "Mustang";
};

int main()
{
    Car myCar;
    
    myCar.bocinazo();
    cout << myCar.brand + " " + myCar.model;

    return 0;
}
*/


/*
 * 2. Herencia multinivel
 */
/*
// Clase base (padre)
class MyClass {
    public:
        void myFunction()
        {
            cout << "Algunos contenidos en la clase para padres.";
        }
};

// Clase derivada (hijo)
class MyChild : public MyClass {
};

// Clase derivada (nieto)
class MyGrandChild : public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();

    return 0;
}
*/


/*
 * 3. Herencia múltiple
 */
/*
// Clase base
class MyClass {
    public:
        void myFunction()
        {
            cout << "Algunos contenidos en la clase para padres." << std::endl;
        }
};

// Otra clase base
class MyOtherClass {
    public:
        void myOtherFunction()
        {
            cout << "Algún contenido en otra clase." << std::endl;
        }
};

// Clase derivada
class MyChildClass : public MyClass, public MyOtherClass {
};

int main()
{
    MyChildClass myObj;
 
    myObj.myFunction();
    myObj.myOtherFunction();
 
    return 0;
}
*/


/*
 * 4. Especificadores de acceso protected
 */
// Clase base
class Employee {
    protected: // Especificador de acceso protegido
        int salary;
};

// Clase derivada
class Programmer : public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main()
{
    Programmer myObj;

    myObj.setSalary(100);
    myObj.bonus = 150;
    
    cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    
    return 0;
}