/*
 * v01/zad1-1
 *
 * Napisati program koji pronalazi najveći broj među svim koje korisnik unosi
 * preko konzole.
 *
 * IMPLEMENTIRATI:
 *  -pronalaženje najvećeg broja (maksimuma)
 *
 * NAPOMENE:
 *  -sve implementirati u main() funkciji
 */
 #include <iostream>

using namespace std;

int main() {
    int m = 0; // najveći broj
    int br; // uneti broj

    cout << "Unesite broj [unesite negativan broj za kraj]:" << endl;

    do {
        cin >> br;
        if (br > m) {
            m = br;
        }
    } while(br >= 0);

    cout << "Najveci broj je: " << m;

    return 0;
}
