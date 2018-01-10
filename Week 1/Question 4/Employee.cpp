//
// Created by Joe Kawai on 9/12/17.
//

#include "Employee.h"

const string &Employee::getFirstName() const {
    return firstName;
}

void Employee::setFirstName(const string &firstName) {
    Employee::firstName = firstName;
}

const string &Employee::getLastName() const {
    return lastName;
}

void Employee::setLastName(const string &lastName) {
    Employee::lastName = lastName;
}

Employee::Employee(const string &lastName, const string &firstName, int salary) : lastName(lastName),
                                                                                  firstName(firstName) {
    setSalary(salary);
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(int salary) {
    if (salary < 0) salary = 0;
    Employee::salary = salary;
}
