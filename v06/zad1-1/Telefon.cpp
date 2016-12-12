#include "Telefon.hpp"

Telefon::Telefon(string broj) : broj(broj) {}

bool Telefon::pozovi(string broj) {
    if (this->broj != broj) {
        return true;
    } else {
        return false;
    }
}
