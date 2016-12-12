#include "Kolokvijum.hpp"

Kolokvijum::Kolokvijum() : Test() {}

Kolokvijum::Kolokvijum(char* naziv) : Test(naziv, rand() % 25 + 1) {}

int Kolokvijum::getPoeni() {
    return osvojeniPoeni;
}

bool Kolokvijum::polozio() {
    if (osvojeniPoeni > 12) {
        return true;
    }
    return false;
}
