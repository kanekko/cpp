#include <iostream>
using namespace std;

// Shape class.
class Figura {
    public:
        // Function to calculate the parameter, declared as pure virtual, so all the derived classes necessarily need to implement this.
        virtual int perimeter() = 0;
        void width(int w) {
            shape_width = w;
        }
        void height(int h) {
            shape_height = h;
        }

    protected:
        int shape_width;
        int shape_height;
};

class Rectangulo : public Figura {
    public:
        // Class Rectangle provided implementation of perimeter() function.
        int perimeter() {
            return (2 * (shape_width + shape_height));
        }
};

class Cuadrado : public Figura {
    public:
        // Class Square provided implementation of perimeter() function.
        int perimeter() {
            return (4 * shape_width);
        }
};

int main()
{

    Rectangulo R;
    Cuadrado S;

    R.width(10);
    R.height(5);
    S.width(10);

    cout << "Perimetro del rectangulo: " << R.perimeter() << endl;
    cout << "Perimetro del cudrado: " << S.perimeter() << endl;
    return 0;
}