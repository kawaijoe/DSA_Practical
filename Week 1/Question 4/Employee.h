//
// Created by Joe Kawai on 9/12/17.
//

#ifndef QUESTION_4_EMPLOYEE_H
#define QUESTION_4_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {

public:
    Employee(const string &lastName, const string &firstName, int salary);

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

    int getSalary() const;

    void setSalary(int salary);

private:
    string lastName;

    string firstName;

    int salary;
};


#endif //QUESTION_4_EMPLOYEE_H
