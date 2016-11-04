/*
 * v02/zad1
 *
 * Napisati klasu Kocka koja modeluje kocku za igru.
 *
 * IMPLEMENTIRATI
 * -prazan konstruktor
 * -konstruktor sa parametrima
 * -konstruktor kopije
 * -metodu void baci()
 * -metodu int getVrednost() const
 * -slobodnu funkciju int meni()
 *
 * NAPOMENE:
 * -prazan konstruktor podešava stranu kocke na 1
 * -za generisanje slučajne vrednosti iskoristiti rand() funkciju koja se nalazi
 *  u C++ zaglavlju cstdlib. Formula za generisanje vrednosti je rand()%X+Y,
 *  gde X predstavlja max a Y min (max=6,min=1)
 * -slobodna funkcija int meni() prikazuje listu operacija i kao povratnu
 *  vrednost vraća broj izabrane operacije. Na osnovu vraćene vrednosti
 *  poziva se odgovarajuća metoda
 */
#include "Kocka.hpp"

#define KRAJ_RADA 3

int meni();

int main() {

    // načini da se kocka kreira
    Kocka k1, k2(3), k3(k2);

    int n;

    do {
        n = meni();

        switch(n){
            case 1: // baci
                k1.baci();
                cout << endl << "Kocka je bacena" << endl << endl;
                break;
            case 2: // prikazi
                cout << endl << "Vrednost kocke je: " << k1.getVrednost() << endl << endl;
                break;
            case 3: // kraj rada programa
                cout << endl << "Izlaz iz programa!" << endl << endl;
                break;
            default:
                cout << endl << "Pogresan broj!" << endl << endl;
                break;
        }
    } while(n != KRAJ_RADA);

    return 0;
}

int meni(){
    int n;
    // ispis menija
    cout << "1. BACI KOCKU" << endl;
    cout << "2. PRIKAZI KOCKU" << endl;
    cout << "3. KRAJ" << endl;
    // učitavanje vrednosti
    cout << ">>";
    cin >> n;
    // vraćanje vrednosti
    return n;
}
