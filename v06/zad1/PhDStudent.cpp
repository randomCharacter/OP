#include "PhDStudent.hpp"

PhDStudent::PhDStudent(const char *ime, const char *prezime, int brIndeksa, double ocena) : Student(ime, prezime, brIndeksa), prosecnaOcena(ocena) {}

PhDStudent::PhDStudent(const DinString& ime, const DinString& prezime, int brIndeksa, double ocena) : Student(ime, prezime, brIndeksa), prosecnaOcena(ocena) {}

PhDStudent::PhDStudent(const Osoba& o, int brIndeksa, double ocena) : Student(o, brIndeksa), prosecnaOcena(ocena) {}

PhDStudent::PhDStudent(const Student& s, double ocena) : Student(s), prosecnaOcena(ocena) {}

PhDStudent::PhDStudent(const PhDStudent& s)  : Student(s), prosecnaOcena(s.prosecnaOcena) {}

void PhDStudent::predstaviSe() {
    super::predstaviSe();
    cout << "PROSECNA OCENA: " << prosecnaOcena << endl;
}
