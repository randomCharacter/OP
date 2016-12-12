#include "Student.hpp"

Student::Student(char* ime, char* prezime, int brIndeksa) : Osoba(ime, prezime), brIndeksa(brIndeksa) {}

Student::Student(const Student& s) : Osoba(s), brIndeksa(s.brIndeksa) {}

int Student::getBrIndeksa() const {
    return brIndeksa;
}

void Student::setBrIndeksa(int brIndeksa) {
    this->brIndeksa = brIndeksa;
}

void Student::ispis() {
    super::ispis();
    cout << "BR. INDEKSA: " << brIndeksa << endl;
}
