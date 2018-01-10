#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    Employee employee1("John", "Tan", 2000);
    Employee employee2("Tim", "Chew", 5000);

    cout << employee1.getSalary() << endl;
    cout << employee2.getSalary() << endl;

    employee1.setSalary(employee1.getSalary() * 1.1);
    employee2.setSalary(employee2.getSalary() * 1.1);

    cout << employee1.getSalary() << endl;
    cout << employee2.getSalary() << endl;

    return 0;
}