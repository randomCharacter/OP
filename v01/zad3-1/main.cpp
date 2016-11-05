/*
 * v01/zad3-1
 *
 * Napisati program koji za pozitivan ceo broj unet sa konzole određuje rezultat
 * dobijen sledećom formulom: rez = √1 + √2 + ... + √n , gde je n broj koji je
 * korisnik uneo, a rez rezultat koji treba da se ispiše na konzoli. Rezultat
 * zaokružiti na 2 decimale.
 *
 * IMPLEMENTIRATI:
 * -funkciju za izračunavanje zadatog izraza koja kao parametar prima ceo
 *  broj, a vraća rezultat zaokružen na 2 decimale.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f(int n);

int main() {
    int n;

    cout << "Unesite broj:" << endl;
    cin >> n;

    // postavlja fiksni zarez
    cout << fixed;
    // postavlja preciznost na 2 decimalna mesta
    cout << setprecision(2);
    // ispis
    cout << "Vrednost sume je " << f(n) << endl;

    return 0;
}

// Funkcija za računanje sume iz teksta zadatka
double f(int n) {
    double s;
    for(int i = 1; i <= n; i++) {
        s += sqrt(i);
    }
    return s;
}
