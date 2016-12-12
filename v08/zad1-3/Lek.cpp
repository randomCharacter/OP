#include "Lek.hpp"

Lek::Lek(long jkl, char *naziv, double jedinicnaCena, int kolicina) : jkl(jkl), naziv(naziv), jedinicnaCena(jedinicnaCena), kolicina(kolicina) {}

Lek::Lek(long jkl, DinString naziv, double jedinicnaCena, int kolicina) : jkl(jkl), naziv(naziv), jedinicnaCena(jedinicnaCena), kolicina(kolicina) {}

Lek::Lek(const Lek& l) : jkl(l.jkl), naziv(l.naziv), jedinicnaCena(l.jedinicnaCena), kolicina(l.kolicina) {}

long Lek::getJkl() const {
    return jkl;
}

DinString Lek::getNaziv() const {
    return naziv;
}
double Lek::getJedinicnaCena() const {
    return jedinicnaCena;
}
int Lek::getKolicina() const {
    return kolicina;
}

void Lek::setJkl(long jkl) {
    this->jkl = jkl;
}

void Lek::setNaziv(const DinString& naziv) {
    this->naziv = naziv;
}

void Lek::setJedinicnaCena(double jedinicnaCena) {
    this->jedinicnaCena = jedinicnaCena;
}

void Lek::setKolicina(int kolicina) {
    this->kolicina = kolicina;
}

double Lek::cena() {
    return jedinicnaCena * kolicina;
}

void Lek::ispis() {
    cout << "JKL: " << jkl << endl;
    cout << "NAZIV: " << naziv << endl;
    cout << "JED. CENA: " << jedinicnaCena << endl;
    cout << "KOLICINA: " << kolicina << endl;
}
