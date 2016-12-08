/*
 * v05/zad2
 *
 * Napisati klasu Artikal koja se sastoji iz dva polja: naziv tipa DinString (kompozicija) i polja
 * cena tipa double. Klasa Artikal treba da ima i jedno polje koje će biti deljeno između svih
 * instanci klase i koje će predstavljati broj napravljenih instanci klase Artikal. Deljeno polje
 * treba da bude celobrojnog tipa podataka (int) i nazvati ga instanci. Napisati kratak test
 * program i pozvati sve implementirane metode, konstruktore i preklopljene operatore.
 *
 * IMPLEMENTIRATI
 * -konstruktor sa parametrima (const char[], const double)
 * -konstruktor sa parametrima (const DinString&, const double)
 * -konstruktor kopije (const Artikal&)
 * -get metode za polja naziv i cena
 * -preklopiti operator ispisa <<
 */
#include "Artikal.hpp"

// main() preuzet sa vežbi
int main() {
    Artikal a1("Milka sa lesnikom 150gr", 142.23);
    cout << a1 << endl;

    DinString d1("Next jabuka 1l");

    Artikal a2(d1, 110);
    cout << a2 << endl;

    {
        Artikal a3(a2);
        cout << a3 << endl;
    } // kako bi se videla uloga destruktora

    cout << a2 << endl;


    return 0;
}

