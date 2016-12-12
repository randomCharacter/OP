#include "Predmet.hpp"

Predmet::Predmet(char* naziv) : naziv(naziv) {}

void Predmet::dodajTest(Test& t) {
    testovi.add(testovi.size() + 1, &t);
}

bool Predmet::polozio() {
    if (getBodovi() > 55) {
        return true;
    }
    return false;
}

int Predmet::getBodovi() {
    int bodovi = 0;
    for (int i = 1; i <= testovi.size(); i++) {
        Test *t;
        testovi.read(i, t);
        bodovi += t->getPoeni();
    }
    return bodovi;
}

void Predmet::ispis() {
    cout << "IME PREDMETA: " <<endl;
    for (int i = 1; i <= testovi.size(); i++) {
        Test *t;
        testovi.read(i, t);
        t->print();
    }
}
