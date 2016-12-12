#include "Osoba.hpp"

Osoba::Osoba(char *ime, char *prezime) : ime(ime), prezime(prezime) {}

Osoba::Osoba(const Osoba& o) : ime(o.ime), prezime(o.prezime) {}

DinString Osoba::getIme() const {
    return ime;
}

DinString Osoba::getPrezime() const {
    return prezime;
}

void Osoba::setIme(const DinString& ime) {
    this->ime = ime;
}

void Osoba::setPrezime(const DinString& prezime) {
    this->prezime = prezime;
}

void Osoba::ispis() const {
    cout << ime << " " << prezime << endl;
}
