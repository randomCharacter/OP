#include "Kamera.hpp"

// Postavljanje statičkog polja na inicijalnu vrednost
int Kamera::photoCounter = 0;

Kamera::Kamera(int megaPikseli, int freeSpace) : megaPikseli(megaPikseli), freeSpace(freeSpace) {}

Kamera::Kamera(Kamera& k) : megaPikseli(k.megaPikseli), freeSpace(k.freeSpace) {}

int Kamera::getPhotoCounter() {
    return photoCounter;
}

bool Kamera::slikaj() {
    if (freeSpace >= megaPikseli) {
        freeSpace -= megaPikseli;
        return true;
    }
    return false;
}
