#include "Valjak.hpp"

// Podrazumevani konstruktor, poziva konstruktore za M i B
Valjak::Valjak(double r, double h) : B(r), M(2 * r * M_PI, h) { }

// Vraća poluprečnik baze valjka
double Valjak::getR() const {
    return B.getR();
}

// Vraća visinu valjka
double Valjak::getH() const {
    return M.getB();
}

// Vraća površinu valjka
double Valjak::getP() const {
    return 2 * B.getP() + M.getP();
}

// Vraća zapreminu valjka
double Valjak::getV() const {
    return B.getP() * M.getB();
}
