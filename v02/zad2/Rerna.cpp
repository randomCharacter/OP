#include "Rerna.hpp"

Rerna::Rerna() {
    trenutnoStanje = ISKLJUCENA;
    temperatura = 0;
}

bool Rerna::iskljuci() {
    switch (trenutnoStanje) {
        case UKLJUCENA:
            trenutnoStanje = ISKLJUCENA;
            temperatura = 0;
            break;
        default:
            return false;
    }
    return true;
}

bool Rerna::ukljuci() {
    switch (trenutnoStanje) {
        case ISKLJUCENA:
            trenutnoStanje = UKLJUCENA;
            temperatura += 20;
            break;
        default:
            return false;
    }
    return true;
}

bool Rerna::pokvari() {
    switch (trenutnoStanje) {
        case UKLJUCENA:
            trenutnoStanje = POKVARENA;
            temperatura = -1;
            break;
        case ISKLJUCENA:
            trenutnoStanje = POKVARENA;
            temperatura = -1;
            break;
        default:
            return false;
    }
    return true;
}

bool Rerna::popravi() {
    switch(trenutnoStanje) {
        case POKVARENA:
            trenutnoStanje = ISKLJUCENA;
            temperatura = 0;
            break;
        default:
            return false;
    }
}

bool Rerna::pojacajTemperaturu() {
    if (temperatura + 20 <= 220) {
        temperatura += 20;
        return true;
    }
    return false;
}

bool Rerna::smanjiTemperaturu() {
    if (temperatura - 20 >= 0) {
        temperatura -= 20;
        return true;
    }
    return false;
}

string Rerna::getTrenutnoStanje() const {
    switch (trenutnoStanje) {
        case UKLJUCENA:
            return "UKLJUCENA";
        case ISKLJUCENA:
            return "ISKLJUCENA";
        case POKVARENA:
            return "POKVARENA";
        default:
            return "GRESKA";
    }
}

int Rerna::getTemperatura() const {
    return temperatura;
}
