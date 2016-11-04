/*
 * v05/zad1-1
 *
 * Napisati klasu Televizor koja opisuje dijagram sa slike (Slika 1). Klasa treba da
 * sadrži: prazan konstruktor, konstruktor kopije, tri polja (stanje, zvuk i kanal) i
 * odgovarajuće metode.
 * Slika 1. Dijagram klase Televizor
 * Polje stanje predstavlja stanje televizora i tipa je niza celobrojnih konstanti
 * Stanje_televizora. Objekat se može naći u jednom od sledećih stanja:
 * UKLJUCEN, ISKLJUCEN ili POKVAREN. Nabrojivi niz konstanti nazvati
 * Stanje_televizora.
 * Polje zvuk predstavlja jačinu zvuka, celobrojnog je tipa podataka (int) i kreće se
 * u opsegu od 0 do 20. Inkremetiranje i dekrementiranje zvuka se vrši sa
 * korakom 1. Korisniku ne treba dozvoliti da izađe iz opsega.
 * Polje kanal predstavlja kanal koji gledamo, celobrojnog je tipa podataka (int) i
 * kreće se u opsegu od 1 do 5. Promena kanala se vrši sa korakom 1. Korisniku ne
 * treba dozvoliti da izađe iz opsega.Zvuk se može pojačati/smanjiti i kanal se može promeniti samo kada se objekat
 * nalazi u stanju UKLJUCEN. U stanju ISKLJUCEN jačina zvuka treba da bude 0 i
 * kanal 1. U stanju POKVAREN jačina zvuka treba da bude -1 i kanal -1.
 * Inicijalno stanje (početno) klase je stanje ISKLJUCEN. U tom stanju polje zvuk je
 * 0, a kanal je 1.
 * Na osnovnu povratne vrednosti poziva metode korisniku prikazati
 * odgovarajuću poruku. Za true prikazati uspesno, za false prikazati neuspesno.
 * 
 * IMPLEMENTIRATI
 * -prazan konstruktor
 * -konstruktor kopije
 * -bool ukljuci()
 * -bool iskljuci()
 * -bool pokvari()
 * -bool popravi()
 * -bool pojacajZvuk()
 * -bool smanjiZvuk()
 * -bool sledeciKanal()
 * -bool prethodniKanal()
 * -string getStanje() const
 * -int getZvuk() const
 * -int getKanal() const
 * -int meni()
 */
#include "Televizor.hpp"

using namespace std;

int meni();

int main() {
    Televizor t;

    int n;

    do {

        n = meni();
        switch (n) {
            case 1:
                if (!t.ukljuci()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 2:
                if (!t.iskljuci()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 3:
                if (!t.pokvari()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 4:
                if (!t.popravi()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 5:
                if (!t.pojacajZvuk()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 6:
                if (!t.smanjiZvuk()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 7:
                if (!t.sledeciKanal()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 8:
                if (!t.prethodniKanal()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 9:
                cout << "Stanje: " << t.getStanje() << " Kanal: " << t.getKanal() << " Zvuk: " << t.getZvuk() << endl;
                break;
            case 10:
                break;
            default:
                cout << "Pogresan broj" << endl;
        }
    } while (n != 10);

    return 0;
}

int meni() {
    cout << "1. ukljuci" << endl;
    cout << "2. iskljuci" << endl;
    cout << "3. pokvari" << endl;
    cout << "4. popravi" << endl;
    cout << "5. pojacajZvuk" << endl;
    cout << "6. smanjiZvuk" << endl;
    cout << "7. sledeciKanal" << endl;
    cout << "8. prethodniKanal" << endl;
    cout << "9. Prikazi stanje" << endl;
    cout << "10. Kraj rada programa" << endl;

    int n;
    cout << ">>";
    cin >> n;
    return n;
}
