#include <iostream>

using std::cout;
using std::string;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";

    // meal = "Hamburguesa";

    // cout << food << "\n";
    // cout << meal << "\n";


    // string z = "Taco";
    // food = "Tlacoyo";
    // meal = z;

    // cout << food << "\n";
    // cout << meal << "\n";
}