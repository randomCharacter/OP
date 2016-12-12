/*
 * v08/zad1-1
 *
 * Data su klasa DinString i generička klasa List.
 *
 * Napisati klasu Test, koja ima polja DinString naziv, int osvojeniPoeni. Takođe, klasa treba da ima
 * apstraktne metode int getPoeni() i bool polozio(), kao i metodu void print() koja ispisuje naziv testa i
 * broj osvojenih poena.
 *
 * Klasu Test nasleđuje klasa Kolokvijum, koja ima konstruktor sa parametrima (char* naz) gde se
 * osvojeniPoeni računaju kao rand()%25 + 1, kao i konstruktor bez parametara (naziv postaviti na
 * prazan string, osvojeniPoeni na 0). Potrebno je redefinisati metodu int getPoeni() koja vraća broj
 * poena. Napisati i metodu bool polozio() koja vraća true ukoliko je broj poena veći od 12, u
 * suprotnom vraća false.
 *
 * Napisati klasu Predmet koja ima polja DinString naziv i List<Test*> testovi. Realizovati metodu void
 * dodajTest(Test& t) koja dodaje novi test u listu testova (na kraj liste), metodu bool polozio() koja
 * vraća true ukoliko je ukupan broj osvojenih poena na testovima veći od 55 i ukoliko je svaki od tih
 * testova položen. Realizovati i metodu int getBodovi() koja vraća broj osvojenih bodova, kao i metodu
 * void ispis() koja ispisuje ime predmeta, i informacije o svim testovima (naziv i broj osvojenih poena).
 * Napisati klasu Student, koji u sebi ima dva predmeta. Klasa treba da ima konstruktor sa parametrima
 * koji prima dva predmeta. Napisati i metodu void ispis() koja treba da ispiše informacije o svakom
 * testu koji je student uradio iz oba predmeta, kao i naziv predmeta iz kog je osvojio više poena na
 * testovima.
 *
 * Realizovati sve metode. Napisati kratak test program. OBAVEZNO istestirati SVE metode i SVE
 * konstruktore (osim get/set metoda).
 */
 #include "Student.hpp"

int main() {
    cout << endl << endl << "TESTIRANJE KLASE KOLOKVIJUM" << endl << endl;

    Kolokvijum k, k1("K1"), k2("K2"), k3("K3"), k4("K4");

    k.print();
    cout << "K: poeni = " << k.getPoeni() << ", polozio = " << (k.polozio() ? "jeste" : "nije") << endl << endl;

    k1.print();
    cout << "K1: poeni = " << k1.getPoeni() << ", polozio = " << (k1.polozio() ? "jeste" : "nije") << endl << endl;

    k2.print();
    cout << "K2: poeni = " << k2.getPoeni() << ", polozio = " << (k2.polozio() ? "jeste" : "nije") << endl << endl;

    k3.print();
    cout << "K3: poeni = " << k3.getPoeni() << ", polozio = " << (k3.polozio() ? "jeste" : "nije") << endl << endl;

    k4.print();
    cout << "K2: poeni = " << k4.getPoeni() << ", polozio = " << (k4.polozio() ? "jeste" : "nije") << endl << endl;


    cout << endl << endl << "TESTIRANJE KLASE PREDMET" << endl << endl;

    Predmet p, p2("OP"), p3("MISS");

    p.ispis();
    p2.ispis();
    p3.ispis();

    p2.dodajTest(k1);
    p2.ispis();

    p2.dodajTest(k2);
    p2.dodajTest(k3);
    p2.dodajTest(k4);
    p2.ispis();

    cout << "Ukupno bodova osvojeno: " << p2.getBodovi() << endl;
    cout << (p2.polozio() ? "Polozio OP" : "Nije polozio OP") << endl;

    Predmet p4(p2);

    p4.ispis();


    cout << endl << endl << "TESTIRANJE KLASE STUDENT" << endl << endl;

    Student s(p2, p3);

    s.ispis();


    return 0;
}

