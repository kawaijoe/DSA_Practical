#include <iostream>

using namespace std;

#include "List.h"
#include "Person.h"

List list;

void listAll() {
    cout << "S/N \tName \tTel No" << endl;
    for (int i = 1; i <= list.getLength(); i++) {
        Person p = list.get(i);
        cout << i << "\t" << p.getName() << " \t" << p.getTelNo() << endl;
    }
}

void addNewContact() {
    cout << "Adding Contact " << endl;

    string name = "", tel = "";
    cout << "Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Tel: ";
    cin.ignore();
    getline(cin, tel);

    Person p(name, tel);
    list.add(p);
    cout << "Added to Contact:\n Name: " << p.getName() << "\t Tel: " << p.getTelNo() << endl;
}

void removeContact() {
    cout << "Removing Contact " << endl;
    listAll();
    cout << "Enter the S/N to remove: ";
    string index;
    cin.ignore();
    getline(cin, index);

    list.remove(atoi(index.c_str()));
    cout << "Remove Success!";
}

void searchNumber() {
    cout << "Enter Phone Number: ";
    string no;
    cin.ignore();
    getline(cin, no);

    for (int i = 1; i <= list.getLength(); i++) {
        Person p = list.get(i);
        if (no.compare(p.getTelNo()) == 0) {
            cout << p.getName() << " \t" << p.getTelNo() << endl;
            break;
        }
    }
}

void displayMenu() {
    cout << "---------------- Main Menu -------------------\n"
         << "[1] list the phone numbers\n"
         << "[2] Add a new contact\n"
         << "[3] Remove a contact\n"
         << "[4] Search for a phone number\n"
         << "[0] Exit\n"
         << "----------------------------------------------\n"
         << "Enter your option :";
    cout.flush();
}

int main() {

    Person p1("Timothy", "9126182");
    list.add(p1);

    Person p2("Johnson", "81274629");
    list.add(p2);

    int opt = -1;

    while (opt != 0) {
        cout << endl;
        displayMenu();
        cin >> opt;

        switch (opt) {
            case 1: listAll();
                break;
            case 2:
                addNewContact();
                break;
            case 3:
                removeContact();
                break;
            case 4:
                searchNumber();
                break;
            case 0:
                opt = 0;
                break;
            default: cout << "Invalid option!" << endl;
                opt = -1;
        }
    }

    return 0;
}