#include "Profesor.hpp"

Profesor::Profesor(char *ime, char *prezime, char *predmet) : Osoba(ime, prezime), predmet(predmet) {}

Profesor::Profesor(const Profesor& p) : Osoba(p), predmet(p.predmet) {}

DinString Profesor::getPredmet() {
    return predmet;
}

void Profesor::setPredmet(const DinString& predmet) {
    this->predmet = predmet;
}

void Profesor::ispis() {
    super::ispis();
    cout << "PREDMET: " << predmet << endl;
}
