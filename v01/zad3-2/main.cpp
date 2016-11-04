/*
 * v01/zad3-2
 *
 * Napisati program koji izračunava i prikazuje svotu novca potrebnu za
 * kupovinu karata za bioskop.
 *
 * IMPLEMENTIRATI:
 * -funkciju za izračunavanje potrebne svote novca, koja ima parametre
 *  koje određuju količinu karata i cenu jedne karte (ukoliko cena jedne karte nije
 *  definisana podrazumevati da košta 50 dinara).
 */
 #include <iostream>

using namespace std;

int izracunaj(int n);
int izracunaj(int n, int cena);

int main()
{
    int n, cena, s;

    cout << "Unesite broj karata:" << endl;
    cin >> n;
    cout << "Unesite cenu karte [negativan broj nije poznata]:" << endl;
    cin >> cena;

    if(cena < 0) {
        s = izracunaj(n);
    } else {
        s = izracunaj(n, cena);
    }

    cout << "Ukupna cena svih karata je " << s << endl;

    return 0;
}

// Računa cenu svih karata ako cena jedne nije navedena
int izracunaj(int n) {
    return 50 * n;
}

// Računa cenu svih karata ako cena jedne jeste navedena
int izracunaj(int n, int cena) {
    return cena * n;
}
