/*
 * v06/zad1
 *
 *Napisati klasu Osoba. Klasa treba da sadrži polja: ime (DinString) i prezime (DinString). Za klasu
 * je potrebno implementirati:
 *  Osoba();
 *  Osoba(const char*, const char*);
 *  Osoba(const DinString&, const DinString&);
 *  Osoba(const Osoba&);
 * Klasa Osoba ima metodu predstaviSe() koja ispisuje (na konzolu) ime i prezime osobe.
 *
 * Napisati klasu Student koja nasleđuje klasu Osoba. Klasa treba da sadrži i dodatno polje:
 * brojIndeksa (int). Za klasu je potrebno implementirati:
 *  Student();
 *  Student(const char*, const char*, int);
 *  Student(const DinString&, const DinString&, int);
 *  Student(const Osoba&, int);
 *  Student(const Student&);
 * Klasa Student redefiniše metodu predstaviSe() tako što dopisuje i broj indeksa.
 *
 * Napisati klasu PhDStudent koja nasleđuje klasu Student. Klasa treba da sadrži i dodatno polje:
 * prosecnaOcena (double). Za klasu je potrebno implementirati:
 * PhDStudent();
 * PhDStudent (const char*, const char*, int, double);
 * PhDStudent (const DinString&, const DinString&, int, double);
 * PhDStudent (const Osoba&, int, double);
 * PhDStudent (const Student&, double);
 * PhDStudent (const PhDStudent&);
 * Klasa PhDStudent redefiniše metodu predstaviSe() tako što dopisuje i prosečnu ocenu.
 *
 * Napisati test program i testirati sve realizovane konstruktore i metode.
 */
#include "PhDStudent.hpp"

int main() {

    const char *s1 = "Petar";
    const char *s2 = "Petrovic";
    const char *s3 = "Jovan";
    const char *s4 = "Jovanovic";

    cout << "*** Kreiranje objekata ds1, ds2, ds3 i ds4." << endl;

    DinString ds1(s1), ds2(s2), ds3(s3), ds4(s4);


    cout << endl << "*** Kreiranje objekata os1, os2 i os3." << endl;

    Osoba os1(s1,s2), os2(ds3,ds4), os3(os2);


    cout << endl << "*** Kreiranje objekata st1, st2, st3 i st4." << endl;

    Student st1(s1, s2, 1234), st2(ds1, ds2, 1234), st3(os2, 1234), st4(st2);


    cout << endl << "*** Kreiranje objekata phds1, phds2, phds3 i phds4." << endl;

    PhDStudent phds1(s1, s2, 1234, 8.56), phds2(ds1, ds2, 1234, 8.56), phds3(os3, 1234, 8.77), phds4(st3, 8.77);


    cout << endl << "*** Predstavljenje." << endl;

    os1.predstaviSe();
    os2.predstaviSe();
    os3.predstaviSe();

    st1.predstaviSe();
    st2.predstaviSe();
    st3.predstaviSe();
    st4.predstaviSe();

    phds1.predstaviSe();
    phds2.predstaviSe();
    phds3.predstaviSe();
    phds4.predstaviSe();

    cout << endl << "*** Unistavanje objekata." << endl;

    return 0;

}
