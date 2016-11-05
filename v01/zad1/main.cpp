/*
 * v01/zad1
 *
 * Napisati program koji pronalazi sumu svih brojeva koje korisnik unosi preko
 * konzole.
 *
 * IMPLEMENTIRATI:
 *  -izračunavanje sume
 *
 * NAPOMENE:
 *  -sve implementirati u main() funkciji
 */
#include <iostream>

using namespace std;

int main() {
    int s; // sabirak
    int zb = 0; // zbir

    cout << "Unesite brojeve za sabrati [0 za kraj]:" << endl;

    do {
        cin >> s;
        zb += s;
    } while(s != 0);

    cout << "Zbir je: " << zb << endl;

    return 0;
}
