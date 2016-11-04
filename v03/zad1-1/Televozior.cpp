#include "Televizor.hpp"

// Prazan konstruktor
Televizor::Televizor() {
    stanje = ISKLJUCEN;
    zvuk = 0;
    kanal = 2;
}

// Konstruktor koji kopira
Televizor::Televizor(Televizor &t) {
    stanje = t.stanje;
    zvuk = t.zvuk;
    kanal = t.kanal;
}

// Uključuje televizor
bool Televizor::ukljuci() {
    if (stanje == ISKLJUCEN) {
        stanje = UKLJUCEN;
        return true;
    }
    return false;
}

// Isključuje televizor nakon 10 sekundi
bool Televizor::iskljuci() {
    if (stanje == UKLJUCEN) {
        stanje = ISKLJUCEN;
        int i = 1;
        while (i <= 10) {
            cout << i*10 << "%" << endl;
            sleep(1);
            i++;
        }
        cout << "ISKLJUCEN!" << endl;
        zvuk = 0;
        kanal = 1;
        return true;
    }
    return false;
}

// Kvari televizor
bool Televizor::pokvari() {
    if (stanje == UKLJUCEN || stanje == ISKLJUCEN) {
        stanje = POKVAREN;
        zvuk = -1;
        kanal = -1;
        return true;
    }
    return false;
}

// Popravlja televizor
bool Televizor::popravi() {
    if (stanje == POKVAREN) {
        stanje = ISKLJUCEN;
        zvuk = 0;
        kanal = 1;
        return true;
    }
    return false;
}

// Pojačava zvuk
bool Televizor::pojacajZvuk() {
    if (stanje == UKLJUCEN && zvuk+1 <= 20) {
            zvuk++;
            return true;
    }
    return false;
}

// Smanjuje zvuk
bool Televizor::smanjiZvuk() {
    if (stanje == UKLJUCEN && zvuk-1 >= 0) {
            zvuk--;
            return true;
    }
    return false;
}

// Prebacuje na sledeći kanal
bool Televizor::sledeciKanal() {
    if (stanje == UKLJUCEN) {
        kanal++;
        kanal %= 5;
        return true;
    }
    return false;
}

// Prebacuje na prethodni kanal
bool Televizor::prethodniKanal() {
    if (stanje == UKLJUCEN) {
        kanal--;
        kanal %= 5;
        return true;
    }
    return false;
}

// Vraća stanje televizora kao string
string Televizor::getStanje() const {
    switch (stanje) {
        case UKLJUCEN:
            return "UKLJUCEN";
        case ISKLJUCEN:
            return "ISKLJUCEN";
        case POKVAREN:
            return "POKVAREN";
        default:
            return "GRESKA";
    }
}

// Vraća trenutni zvuk televizora
int Televizor::getZvuk() const {
    return zvuk;
}

// Vraća trenutni kanal televizora
int Televizor::getKanal() const {
    return kanal;
}
