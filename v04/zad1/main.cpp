/*
 * v04/zad1
 *
 * Napisati klasu Complex koja modeluje kompleksni broj. Klasa treba da sadrži
 * dva polja: real i imag (oba tipa double).
 *
 * (Zadatak 4.3.1 iz zbirke)
 */
#include "Complex.hpp"
int main() {
    Complex z1, z2(1,1), z3(2,3), z4(1,0), z5(0,1), z6(0,0);

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << "z3 = " << z3 << endl;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;
    cout << "z6 = " << z6 << endl;

    z1 = z2 + z3;

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << "z3 = " << z3 << endl;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;
    cout << "z6 = " << z6 << endl;

    z2 = z1 * z3;

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << "z3 = " << z3 << endl;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;
    cout << "z6 = " << z6 << endl;

    z2 += z3;

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    cout << "z3 = " << z3 << endl;
    cout << "z4 = " << z4 << endl;
    cout << "z5 = " << z5 << endl;
    cout << "z6 = " << z6 << endl;

    cout << "Unesite z1: " << endl;

    cin >> z1;

    cout << "Unesite z2: " << endl;

    cin >> z2;

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    z1++;

    ++z2;

    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    return 0;
}
