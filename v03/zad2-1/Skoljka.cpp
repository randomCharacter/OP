#include "Skoljka.hpp"

Skoljka::Skoljka() {
    boja = PLAVA;
}

Skoljka::Skoljka(Boja_skoljke boja) {
    this->boja = boja;
}

Skoljka::Skoljka(Skoljka &s) {
    boja = s.boja;
}

void Skoljka::setBoja(Boja_skoljke boja) {
    this->boja = boja;
}

string Skoljka::getBoja() const {
    switch (boja) {
        case PLAVA:
            return "PLAVA";
        case CRVENA:
            return "CRVENA";
        case ZELENA:
            return "ZELENA";
    }
}
