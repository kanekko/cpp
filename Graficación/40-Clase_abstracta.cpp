#include <iostream>

using std::cout;
using std::string;

/*
 * 1. 
 
class Base {
    public:
        virtual void foo() = 0;
};

class Hija : public Base {
};

int main() {
    Hija h;

    return 0;
}
*/

/*
 * 2.
 */
class Base {
    public:
        virtual void foo() = 0;
};

class Hija : public Base {
    public:
        void foo() override {
            std::cout << "Estoy en la clase hija";
        }
};

int main()
{
    Hija h;
    h.foo();
    // getchar();

    return 0;
}