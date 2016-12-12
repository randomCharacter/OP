#include "EvidencijaLekova.hpp"

EvidencijaLekova::EvidencijaLekova() {}

DinString EvidencijaLekova::getNazivApoteke() const {
    return nazivApoteke;
}

DinString EvidencijaLekova::getDatum() const {
    return datum;
}

void EvidencijaLekova::setNazivApoteke(const DinString& nazivApoteke) {
    this->nazivApoteke = nazivApoteke;
}

void EvidencijaLekova::setDatum(const DinString& datum) {
    this->datum = datum;
}

bool EvidencijaLekova::dodajLek() {
    cout << "----UNOSENJE LEKA----" << endl;

    long jkl;
    char naziv[51];
    double jedinicnaCena;
    int kolicina;
    Lek l;

    cout << "JKL: ";
    cin >> jkl;
    cout << "NAZIV: ";
    cin >> naziv;
    cout << "JED. CENA: ";
    cin >> jedinicnaCena;
    cout << "KOLICINA: ";
    cin >> kolicina;

    l.setJkl(jkl);
    l.setNaziv(naziv);
    l.setJedinicnaCena(jedinicnaCena);
    l.setKolicina(kolicina);

    return evidencija.add(evidencija.size() + 1, l);
}

bool EvidencijaLekova::dodajLek(const Lek& l) {
    return evidencija.add(evidencija.size() + 1, l);
}

bool EvidencijaLekova::ukloniLek(int i) {
    return evidencija.remove(i);
}

void EvidencijaLekova::sort() {
    for (int i = 1; i <= evidencija.size(); i++) {
        for (int j = i; j <= evidencija.size(); j++) {
            Lek lI, lJ;
            evidencija.read(i, lI);
            evidencija.read(j, lJ);

            if (lI.getJedinicnaCena() > lJ.getJedinicnaCena()) {
                evidencija.remove(i);
                evidencija.add(i, lJ);
                evidencija.remove(j);
                evidencija.add(j, lI);
            }
        }
    }
}

void EvidencijaLekova::ispis() {
    cout << "NAZIV APOTEKE: " << nazivApoteke << endl;
    cout << "DATUM: " << datum << endl;
    if (evidencija.empty()) {
        cout << "APOTEKA PRAZNA!" << endl;
    } else {
        for (int i = 1; i <= evidencija.size(); i++) {
            Lek l;
            evidencija.read(i, l);
            l.ispis();
        }
    }
}
