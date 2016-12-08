/*
 * v04/zad1-2
 *
 * Napisati program koji vrši sortiranje dinamički alociranog niza čiji elementi se
 * učitavaju preko konzole.
 *
 * IMPLEMENTIRATI
 * -funkciju za unos elemenata sa dva argumenta
 *  1. pokazivač na niz
 *  2. dužina niza
 * -funkciju za sortiranje sa tri argumenta
 *  1. pokazivač na niz
 *  2. dužina niza
 *  3. nabrojivi niz podataka celobrojnog tipa (RASTUCE, OPADAJUCE)
 * -funkciju za štampanje elemenata sa dva argumenta
 *  1. pokazivač na niz
 *  2. dužina niza
 *
 * NAPOMENE:
 * -dužina niza se unosi preko konzole
 *
 */
#include "Vreme.hpp"

// Podrazumevani konstruktor
Vreme::Vreme(int sekunde, int minuti, int sati) {
    this->sekunde = sekunde;
    this->sekunde += 60 * minuti;
    this->sekunde += 3600 * sati;
}

// Konstruktor kopije
Vreme::Vreme(Vreme& v) {
    this->sekunde = v.sekunde;
}

// Aritmetički operatori
Vreme operator-(const Vreme& v1, const Vreme& v2) {
    Vreme w(v1.sekunde - v2.sekunde);
    return w;
}

Vreme operator+(const Vreme& v1, const Vreme& v2) {
    Vreme w(v1.sekunde + v2.sekunde);
    return w;
}

// Operatori dodele
Vreme& Vreme::operator=(const Vreme& v) {
    this->sekunde = v.sekunde;
    return *this;
}

Vreme& Vreme::operator+=(const Vreme& v) {
    this->sekunde += v.sekunde;
    return *this;
}

Vreme& Vreme::operator-=(const Vreme& v) {
    this->sekunde -= v.sekunde;
    return *this;
}

// Prefiksni operator --
Vreme& Vreme::operator--() {
    --this->sekunde;
    return *this;
}

// Postfiksni operator --
Vreme Vreme::operator--(int) {
    Vreme v(this->sekunde);
    this->sekunde--;
    return v;
}

// Prefiksni operator ++
Vreme& Vreme::operator++() {
    ++this->sekunde;
    return *this;
}

// Postfiksni operator ++
Vreme Vreme::operator++(int) {
    Vreme v(this->sekunde);
    this->sekunde++;
    return v;
}

// Operatori poređenja
bool operator==(Vreme& v1, Vreme& v2) {
    return (v1.sekunde == v2.sekunde);
}

bool operator!=(Vreme& v1, Vreme& v2) {
    return (v1.sekunde != v2.sekunde);
}

bool operator<(Vreme& v1, Vreme& v2)  {
    return (v1.sekunde < v2.sekunde);
}

bool operator<=(Vreme& v1, Vreme& v2)  {
    return (v1.sekunde <= v2.sekunde);
}

bool operator>(Vreme& v1, Vreme& v2)  {
    return (v1.sekunde > v2.sekunde);
}

bool operator>=(Vreme& v1, Vreme& v2)  {
    return (v1.sekunde >= v2.sekunde);
}

// Operator učitavanja
istream& operator>>(istream& in, Vreme& v) {
    in >> v.sekunde;
    return in;
}

// Operator ispisa
ostream& operator<<(ostream& out, const Vreme& v) {
    out << "Preostalo vreme: ";
    int sekunde = v.sekunde;

    if (sekunde < 0) {
        out << "-";
        sekunde = -sekunde;
    }

    int sati = sekunde / 3600;
    int minuti = (sekunde % 3600) / 60;
    sekunde = (sekunde % 3600) % 60;

    if (sati != 0) {
        out << sati << "h : " << minuti << "m : " << sekunde << "s" << endl;
    } else if (minuti != 0) {
        out << minuti << "m :" << sekunde << "s" << endl;
    } else {
        out << sekunde << "s" << endl;
    }

    return out;
}
