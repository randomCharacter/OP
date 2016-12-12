#include "Osoba.hpp"

Osoba::Osoba(const char *ime, const char *prezime) : ime(ime), prezime(prezime) {}

Osoba::Osoba(const DinString& ime, const DinString& prezime) : ime(ime), prezime(prezime) {}

Osoba::Osoba(const Osoba& o) : ime(o.ime), prezime(o.prezime) {}

void Osoba::predstaviSe() {
    cout << "IME: " << ime << endl;
    cout << "PREZIME: " << prezime << endl;
}
