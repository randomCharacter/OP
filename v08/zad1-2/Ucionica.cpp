#include "Ucionica.hpp"

Ucionica::Ucionica(int maxOsoba) : maxOsoba(maxOsoba) {}

DinString Ucionica::getNaziv() {
    return naziv;
}

void Ucionica::setNaziv(const DinString& naziv) {
    this->naziv = naziv;
}

bool Ucionica::dodaj(const Osoba& o) {
    if (osobe.size() < maxOsoba) {
        osobe.add(osobe.size() + 1, o);
        return true;
    }
    return false;
}

void Ucionica::ispis() {
    for (int i = 1; i <= osobe.size(); i++) {
        Osoba o;
        osobe.read(i, o);
        o.ispis();
    }
}
