#include "Pravougaonik.hpp"

// Podrazumevani konstruktor
Pravougaonik::Pravougaonik(double a, double b) {
    this->a = a;
    this->b = b;
}

// Vraća prvu stranicu
double Pravougaonik::getA() const {
    return a;
}

// Vraća drugu stranicu
double Pravougaonik::getB() const {
    return b;
}

// Vraća obim pravougaonika
double Pravougaonik::getO() const {
    return 2 * (a + b);
}

// Vraća površinu pravougaonika
double Pravougaonik::getP() const {
    return a * b;
}
