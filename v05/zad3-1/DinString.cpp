#include "DinString.hpp"

// Podrazumevani konstruktor
DinString::DinString() {
    duzina = 0;
    text = NULL;
}

// Konstruktor sa parametrima
DinString::DinString(const char ulaz[]) {
    // Računanje dužine
    duzina = 0;
    while(ulaz[duzina] != '\0') {
        duzina++;
    }

    // Kopiranje teksta
    text = new char[duzina + 1];
    for (int i = 0; i < duzina; i++) {
        text[i] = ulaz[i];
    }

    // Postavljanje poslednjeg karaktera na '\0'
    text[duzina] = '\0';
}

// Konstruktor kopije
DinString::DinString(const DinString& dins) {
    duzina = dins.duzina;

    // Kopiranje teksta
    text = new char[duzina + 1];
    for(int i = 0; i <= duzina; i++) {
        text[i] = dins.text[i];
    }
}

// Destruktor
DinString::~DinString() {
    delete[] text;
}

// Vraća dužinu DinStringa
int DinString::length() const {
    return duzina;
}

// Operator [] za dodelu vrednosti i-tom članu
char& DinString::operator[] (int i) {
    return text[i];
}

// Operator [] za dobijanje vrednosti i-tog člana
char DinString::operator[] (int i) const {
    return text[i];
}

// Operatori dodele
DinString& DinString::operator=(const DinString& dins) {
    // Provera u slučaju dodele samom sebi
    if(this != &dins) {
        delete[] text;
        duzina = dins.duzina;
        text = new char[duzina + 1];
        for (int i = 0; i < duzina; i++) {
            text[i] = dins.text[i];
        }
        text[duzina] = '\0';
    }
    return *this;
}

DinString& DinString::operator+=(const DinString& dins) {
    // Smeštanje u novokreirani string
    char *newText = new char[duzina + dins.duzina + 1];
    for (int i = 0; i < duzina; i++) {
        newText[i] = text[i];
    }
    for (int i = 0; i < dins.duzina; i++) {
        newText[duzina + i] = dins.text[i];
    }
    // Upis nove dužine i postavljanje kraja stringa
    duzina += dins.duzina;
    newText[duzina] = '\0';
    // Brisanje starog i postavljanje novog teksta
    delete[] text;
    text = newText;

    return *this;
}

// Operatori poređenja
bool operator==(const DinString& dins1, const DinString& dins2){
    // Ako su im dužine različite nisu isti
    if(dins1.duzina != dins2.duzina) {
        return false;
    }
    for(int i = 0; i < dins1.duzina; i++) {
        // Ako im se bilo koji bit razlikuje nisu isti
        if(dins1.text[i] != dins2.text[i]) {
            return false;
        }
    }
    // U ostalim slučajevima su isti
    return true;
}

bool operator!=(const DinString& dins1, const DinString& dins2){
    // Ako su im dužine različite nisu isti
    if(dins1.duzina != dins2.duzina) {
        return true;
    }
    for(int i = 0; i < dins1.duzina; i++) {
        if(dins1.text[i] != dins2.text[i]) {
            return true;
        }
    }
    return false;
}

// Operator konkatanacije
DinString operator+(const DinString& dins1, const DinString& dins2){
    // Kreiranje novog objekta
    DinString newDinString;
    newDinString.duzina = dins1.duzina + dins2.duzina;
    // Zauzimanje memorije
    newDinString.text = new char[newDinString.duzina + 1];
    // Kopiranje iz prvog
    for(int i = 0; i < dins1.duzina; i++) {
        newDinString.text[i] = dins1.text[i];
    }
    // Kopiranje iz drugog
    for(int i = 0; i < dins2.duzina; i++) {
        newDinString.text[dins1.duzina + i] = dins2.text[i];
    }
    // Smeštanje kraja stringa
    newDinString.text[newDinString.duzina] = '\0';

    return newDinString;
}

// Operator ispisa
ostream& operator<<(ostream& out, const DinString& dins) {
    if(dins.duzina > 0) {
        out << dins.text;
    }
    return out;
}
