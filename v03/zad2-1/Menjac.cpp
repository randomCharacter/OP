#include "Menjac.hpp"

Menjac::Menjac() {
    tip = AUTOMATIK;
    brzina = 5;
}

Menjac::Menjac(int brzina, Tip_menjaca tip) {
    this->brzina = brzina;
    this->tip = tip;
}

Menjac::Menjac(Menjac &m) {
    brzina = m.brzina;
    tip = m.tip;
}

bool Menjac::setBrzina(int brzina) {
    if (brzina > 0) {
        this->brzina = brzina;
        return true;
    }
    return false;
}

void Menjac::setTip(Tip_menjaca tip) {
    this->tip = tip;
}

int Menjac::getBrzina() const {
    return brzina;
}

string Menjac::getTip() const {
    switch (tip) {
        case AUTOMATIK:
            return "AUTOMATIK";
        case MANUELNI:
            return "MANUELNI";
        default:
            return "GRESKA";
    }
}
