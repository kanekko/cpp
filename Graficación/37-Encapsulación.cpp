#include <iostream>

using std::cout;
using std::string;

class Employee {
    private: 
        int salary; // Atributo privado

    public:
        void setSalary(int s){ // Método Setter
            salary = s;
        }

        int getSalary(){ // Método Getter
            return salary;
        }
};

int main() {
    Employee myObj;
    
    myObj.salary = 5;

    myObj.setSalary(100);
    cout << myObj.getSalary();

    return 0;
}