//
// Created by Joe Kawai on 9/12/17.
//

#ifndef WEEK_2_PERSON_H
#define WEEK_2_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string name;
    string telNo;
public:
    const string &getName() const;

    void setName(const string &name);

    const string &getTelNo() const;

    void setTelNo(const string &telNo);

public:
    Person(const string &name, const string &telNo);

    Person();
};


#endif //WEEK_2_PERSON_H
