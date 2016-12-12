#include "Dijamant.hpp"

Dijamant::Dijamant(double vrednost, double karat) : vrednost(vrednost), karat(karat) {}

Dijamant::Dijamant(const Dijamant& d) : vrednost(d.vrednost), karat(d.karat) {}

double Dijamant::getVrednost() {
    return vrednost;
}

double Dijamant::getKarat() {
    return karat;
}
