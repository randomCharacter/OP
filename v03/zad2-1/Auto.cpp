#include "Auto.hpp"

Auto::Auto() : menjac(), skoljka() { }

Auto::Auto(int brzina, Tip_menjaca tip, Boja_skoljke boja) : menjac(brzina, tip), skoljka(boja) { }

bool Auto::setBrzina(int brzina) {
    return menjac.setBrzina(brzina);
}

void Auto::setBoja(Boja_skoljke boja) {
    skoljka.setBoja(boja);
}

void Auto::setTipMenjaca(Tip_menjaca tip) {
    menjac.setTip(tip);
}

int Auto::getBrzina() const {
    return menjac.getBrzina();
}

string Auto::getTipMenjaca() const {
    return menjac.getTip();
}

string Auto::getBoja() const {
    return skoljka.getBoja();
}
