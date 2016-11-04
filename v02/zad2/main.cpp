/*
 * v02/zad2
 *
 * Napisati klasu Rerna (koja opisuje dijagram sa slike). Klasa treba da sadrži polja:
 * trenutnoStanje (tipa nabrojivi niz celobrojni vrednosti StanjeRerne) i
 * temperatura (celobrojnog tipa - int). Temperatura se nalazi u opsegu 0 i 220 0 C.
 * Promena temperature se uvek vrši za korak od 20 0 C. Temperatura se može
 * menjati samo u stanju UKLJUCENA. U stanju POKVARENA temperatura ima
 * vrednost -1, a u stanju ISKLJUCENA ima vrednost 0. Prilikom paljenja rerne,
 * potrebno je automatski povećati temperaturu za jedan korak.
 *
 * IMPLEMENTIRATI
 * -prazan konstruktor
 * -metodu bool ukljuci()
 * -metodu bool iskljuci()
 * -metodu bool pokvari()
 * -metodu bool popravi()
 * -metodu bool pojacajTemperaturu()
 * -metodu bool smanjiTemperaturu()
 * -metodu string getTrenutnoStanje() const
 * -metodu int getTemperatura() const
 * -slobodnu funkciju int meni()
 *
 * NAPOMENE:
 * -prazan konstruktor postavlja klasu Rerna u inicijalno stanje, gde je
 *  stanje je ISKLJUCENA, a temperatura 0
 * -voditi računa o uslovima i granicama za polje temperatura
 */
#include "Rerna.hpp"

int meni();

int main() {
    Rerna r;
    int n;

    do {
        cout << endl << "Rerna je " << r.getTrenutnoStanje() << endl;
        n = meni();
        switch (n) {
            case 1: // ukljuci
                if (!r.ukljuci()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 2: // iskljuci
                if (!r.iskljuci()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 3: // pokvari
                if (!r.pokvari()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 4: // popravi
                if (!r.popravi()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 5: // pojacaj
                if (!r.pojacajTemperaturu()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 6: // smanji
                if (!r.smanjiTemperaturu()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 7: // ispis temperature
                cout << "Trenutna temperatura: " << r.getTemperatura() << endl;
                break;
            case 8:
                break;
            default:
                cout << "Pogresan broj!" << endl;
                break;
        }
    } while (n != 8);

    return 0;
}

int meni() {
    int n;
    // ispis menija
    cout << "1. UKLJUCI RERNU" << endl;
    cout << "2. ISKLJUCI RERNU" << endl;
    cout << "3. POKVARI RERNU" << endl;
    cout << "4. POPRAVI RERNU" << endl;
    cout << "5. POJACAJ TEMPERATURU" << endl;
    cout << "6. SMANJI TEMPERATURU" << endl;
    cout << "7. OCITAJ TEMPERATURU" << endl;
    cout << "8. KRAJ" << endl;
    // učitavanje vrdnosti
    cout << ">>";
    cin >> n;
    // vraćanje vrednosti
    return n;
}
