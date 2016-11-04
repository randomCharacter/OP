/*
 * v02/zad3-1
 *
 * Napisati klasu XnaY koja modeluje matematicku operaciju X^Y
 *
 * IMPLEMENTIRATI
 * -prazan konstruktor
 * -konstruktor sa parametrima
 * -konstruktor kopije
 * -metodu void setX(int)
 * -metodu void setY(int)
 * -metodu void setX_Y(int, int)
 * -metodu int getX() const
 * -metodu int getY() const
 * -metodu int getXnaY() const
 *
 * NAPOMENE:
 * -prazan konstruktor podešava X i Y na 1
 * -za izračunavanje iskoristiti metodu pow() koja se nalazi u C++ zaglavlju
 *  cmath.
 */
#include "XnaY.hpp"

int meni();

int main() {
    XnaY xy;
    int n, p;

    do {
        n = meni();
        switch (n) {
            case 1:
                cout << "Unesite X:";
                cin >> p;
                xy.setX(p);
                break;
            case 2:
                cout << "Unesite Y:";
                cin >> p;
                xy.setY(p);
                break;
            case 3:
                cout << "X = " << xy.getX() << endl;
                break;
            case 4:
                cout << "Y = " << xy.getY() << endl;
                break;
            case 5:
                cout << "X^Y = " << xy.getXnaY() << endl;
                break;
            case 6:
                break;
            default:
                cout << "Greska!";
        }
    } while (n != 6);


    return 0;
}

int meni() {
    // Ispis menija
    cout << "1. Promena X" << endl;
    cout << "2. Promena Y" << endl;
    cout << "3. Vrednost X" << endl;
    cout << "4. Vrednost Y" << endl;
    cout << "5. Vrednost X^Y" << endl;
    cout << "6. Izlaz" << endl;

    // Učitavanje vrednosti
    int n;
    cout << ">>";
    cin >> n;
    return n;
}
