#include "Student.hpp"

Student::Student(const char *ime, const char *prezime, int brIndeksa) : super(ime, prezime), brojIndeksa(brIndeksa) {}

Student::Student(const DinString& ime, const DinString& prezime, int brIndeksa) : super(ime, prezime), brojIndeksa(brIndeksa) {}

Student::Student(const Osoba& o, int brIndeksa) : super(o), brojIndeksa(brIndeksa) {}

Student::Student(const Student& s) : super(s), brojIndeksa(s.brojIndeksa) {}

void Student::predstaviSe() {
    super::predstaviSe();
    cout << "BR. INDEKSA: " << brojIndeksa << endl;
}
