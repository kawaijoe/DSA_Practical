//
// Created by Joe Kawai on 9/12/17.
//

#include "Person.h"

using namespace std;

Person::Person() {}

Person::Person(const string &name, const string &telNo) : name(name), telNo(telNo) {}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getTelNo() const {
    return telNo;
}

void Person::setTelNo(const string &telNo) {
    Person::telNo = telNo;
}
