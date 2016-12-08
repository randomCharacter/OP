#include "Artikal.hpp"

// Inicijalna vrednost statičkog polja (obavezno)
int Artikal::instanci = 0;

// Konstruktor sa parametrima
Artikal::Artikal(const char naziv[], const double cena) : naziv(naziv), cena(cena) {
    instanci++;
}

// Konstruktor sa parametrima
Artikal::Artikal(const DinString& naziv, const double cena) : naziv(naziv), cena(cena) {
    instanci++;
}

// Konstruktor kopije
Artikal::Artikal(const Artikal& a) : naziv(a.naziv), cena(a.cena) {
    instanci++;
}

// Destruktor
Artikal::~Artikal() {
    instanci--;
}

// Geteri
DinString Artikal::getNaziv() const {
    return naziv;
}

double Artikal::getCena() const {
    return cena;
}

// Operator ispisa
ostream& operator<<(ostream& out, const Artikal& a) {
    out << "NAZIV: " << a.naziv << endl;
    out << "CENA: " << a.cena << endl;
    out << "INSTANCI: " << a.instanci << endl;

    return out;
}
