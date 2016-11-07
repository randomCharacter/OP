/*
 * v03/zad2
 *
 * Uz upotrebu kompozicije napisati klasu Valjak koja opisuje geometrijsku figuru
 * valjak. Klasa Valjak treba da se sastoji iz 2 objekta-člana: klase Krug i klase
 * Pravougaonik. Klasa Valjak treba da implementira: konstruktor sa parametrima
 * (sa podrazumevanim vrednostima za parametre), get metodu getR koja kao
 * povratnu vrednost vraća poluprečnik baze valjka (poluprečnik r kruga), get
 * metodu getH koja kao povratnu vrednost vraća visinu omotača valjka (stranica
 * b pravougaonika) i metode getP i getV koje kao povratne vrednosti vraćaju
 * površinu i zapreminu valjka.
 * Klasu Krug opisati pomoću polja r tipa double koje predstavlja poluprečnik
 * kruga. Sama klasa treba da implementira: konstruktor sa parametrima (sa
 * podrazumevanim vrednostima za parametre), get metodu getR koja kao
 * povratnu vednost vraća poluprečnik kruga, i metode getO i getP koje kao
 * povratne vrednosti vraćaju obim i površinu kruga.
 * Klasu Pravougaonik opisati pomoću polja a i b tipa double koja predstavljaju
 * stranice a i b pravougaonika. Sama klasa treba da implementira: konstruktor sa
 * parametrima (sa podrazumevanim vrednostima za parametre), get metode
 * getA i getB koje kao povratne vrednosti vraćaju dužinu stranica a i b, i metoda
 * getO i getP koje kao povratne vrednosti vraćaju obim i površinu pravougaonika.
 */
 #include "Valjak.hpp"

int main()
{
    double r, h;

    // Učitavanje
    cout << "Unesite poluprecnik baze valjka:";
    cin >> r;
    cout << "Unesite visinu valjka:";
    cin >> h;

    // Kreiranje valjka
    Valjak V(r, h);

    // Postavljanje ispisa na 2 decimale
    cout << fixed << setprecision(2);

    // Ispis rezultata
    cout << "Povrsina valjka: " << V.getP() << endl;
    cout << "Zapremina valjka: " << V.getV() << endl;


    return 0;
}
