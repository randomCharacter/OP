/*
 * v03/zad2-1
 *
 * Uz upotrebu kompozicije napisati klasu Auto koja modeluje Automobil sa
 * klasama Menjac i Skoljka. Klasa Menjac treba da ima dva polja koja
 * predstavljaju broj brzina menjača i tip menjača (automatik ili manuelni). Klasa
 * Skoljka treba da ima jedno polje koje predstavlja boju školjke.
 *
 * IMPLEMENTIRATI
 * -za klasu MENJAC:
 *  1. prazan konstruktor, konstruktor sa parametrima i kopije
 *  2. metodu bool setBrzina(int)
 *  3. metodu void setTip(Tip_menjaca)
 *  4. metodu int getBrzina() const
 *  5. metodu string getTip() const
 * -za klasu SKOLJKA:
 *  1. prazan konstruktor, konstruktor sa parametrima i kopije
 *  2. metodu void setBoja(Boja_skoljke)
 *  3. metodu string getBoja() const
 * -za klasu AUTO:
 *  1. prazna konstruktor i konstruktor sa parametrima
 *  2. metodu bool setBrzina(int)
 *  3. metodu void setBoja(Boja_skoljke)
 *  4. metodu void setTipMenjaca(Tip_menjaca)
 *  5. metodu int getBrzina() const
 *  6. metodu string getTipMenjaca () const
 *  7. metodu string getBoja() const
 *
 * NAPOMENE:
 * -Tip menjača (1. automatik 2.manuelni) – enum
 * -Boja skoljke (1.plava 2.crvena 3.zelena) – enum
 * -u main() pozvati sve konstruktore i metode
 *
 */
 #include "Auto.hpp"

// Test sa vežbe
int main() {
    Menjac m1;
    Menjac m2(2, AUTOMATIK);
    Menjac m3(m2);

    Skoljka s1;
    Skoljka s2(ZELENA);
    Skoljka s3(s2);

    Auto a1;
    Auto a2(2, MANUELNI, ZELENA);
    Auto a3(a2);

    cout << "Menjac je " << m2.getTip() << " i ima " << m2.getBrzina() << " brzine" << endl;

    m2.setBrzina(6);
    m2.setTip(MANUELNI);

    cout << "Menjac je " << m2.getTip() << " i ima " << m2.getBrzina() << " brzina" << endl << endl;

    cout << "Skoljka je " << s2.getBoja() << endl;

    s2.setBoja(PLAVA);

    cout << "Skoljka je " << s2.getBoja() << endl << endl;

	cout << "*** Auto ***" << endl;
	cout << "Menjac je " << a2.getTipMenjaca() << " i ima " << a2.getBrzina() << " brzina" << endl;

    cout << "Skoljka je " << a2.getBoja() << endl;

    return 0;
}
