/*
 * v02/zad2-1
 *
 * Napisati klasu Machine (koja opisuje dijagram sa slike). Klasa treba da sadrži
 * polja: currentState i value. Polje value može imati vrednosti između 0 i 80, a
 * menja se sa korakom koji iznosi 20.
 *
 * IMPLEMENTIRATI:
 * -prazan konstruktor
 * -metodu bool metodaX()
 * -metodu bool metodaY()
 * -metodu bool metodaZ()
 * -metodu bool metodaW()
 * -metodu bool plus()
 * -metodu bool minus()
 * -metodu string getCurrentState() const;
 * -metodu int getValue() const;
 * -slobodnu funkciju int meni()
 * -slobodnu funkciju void printInfo(const Machine&)
 *
 * NAPOMENE:
 * -prazan konstruktor postavlja klasu Machine u inicijalno stanje, gde je
 *  currentState = sC, a value = 80
 * -voditi računa o uslovima i granicama za polje value
 * -metoda bool plus() povećava vrednost polja value za jedan korak, ukoliko
 *  su zadovoljeni uslovi
 * -metoda bool minus() smanjuje vrednost polja value za jedan korak,
 *  ukoliko su zadovoljeni uslovi
 */
#include "Machine.hpp"

int meni();
void printInfo(const Machine&);

int main() {
    Machine m;
    int n;

    do {
        printInfo(m);
        n = meni();

        switch(n) {
            case 1: // metodaX()
                if (!m.metodaX()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 2: // metodaY()
                if (!m.metodaY()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 3: // metodaZ()
                if (!m.metodaZ()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 4: // metodaW()
                if (!m.metodaW()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 5: // plus()
                if (!m.plus()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 6: // minus
                if (!m.minus()) {
                    cout << "Greska!" << endl;
                }
                break;
            case 7: // exit
                break;
            default:
                cout << "Greska!" << endl;
        }

    } while (n != 7);

    return 0;
}

void printInfo(const Machine &m) {
    cout << "Stanje:" << m.getCurrentState() << endl;
    cout << "Vrednost:" << m.getValue() << endl;
}

int meni() {
    // Ispis menija
    cout << "1: metodaX()" << endl;
    cout << "2: metodaY()" << endl;
    cout << "3: metodaZ()" << endl;
    cout << "4: metodaW()" << endl;
    cout << "5: plus()" << endl;
    cout << "6: minus()" << endl;
    cout << "7: exit" << endl;

    // Učitavanje vrednosti
    int n;
    cout << ">>";
    cin >> n;
    return n;
}
