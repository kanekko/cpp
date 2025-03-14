#include <iostream>

using namespace std;

class Base {
    public:
        virtual void foo() = 0;
};

class Hija : public Base {
    public:
        void foo()  {
            cout << "Estoy en la clase hija" << endl;
        }
};

int main() {
    Hija h;
    h.foo();
    // getchar();

    return 0;
}