#include "Krug.hpp"

// Podrazumevani konstruktor
Krug::Krug(double r) {
    this->r = r;
}

// Vraća poluprečnik kruga
double Krug::getR() const {
    return r;
}

// Vraća obim kruga
double Krug::getO() const {
    return 2 * r * M_PI;
}

// Vraća površinu kruga
double Krug::getP() const {
    return pow(r, 2) * M_PI;
}
