#include "Kocka.hpp"

// Prazan konstruktor
Kocka::Kocka() {
    srand(time(NULL));
    vrednost = rand() % 6 + 1;
}

// Kreira novu kocku kao kopiju prosleđene
Kocka::Kocka(const Kocka &k) {
    srand(time(NULL));
    vrednost = k.vrednost;
}

// Kreira kocku sa zadatom vrednošću
Kocka::Kocka(int i) {
    srand(time(NULL));
    vrednost = i;
}

// Simulira bacanje kocke
void Kocka::baci() {
    vrednost = rand() % 6 + 1;
}

// Vraća trenutnu vrednost kocke
int Kocka::getVrednost() const{
    return vrednost;
}
