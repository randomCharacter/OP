/*
 * v06/zad1-1
 *
 * Napisati klasu Telefon. Klasa treba da sadrži polje: broj (string). Za klasu je potrebno implementirati:
 * -Konstruktor bez parametara;
 * -Konstruktor sa parametrima;
 * -Metodu bool pozovi(string) koja vraća true ako telefon pokuša da pozove broj koji nije
 *  njegov, a u suprotnom vraća false.
 *
 * Napisati klasu Kamera. Klasa treba da sadrži polja: megaPikseli (int), freeSpace (int), photoCounter
 * (statičko polje tipa int). Za klasu je potrebno implementirati:
 * -Konstruktor bez parametara;
 * -Konstruktor sa parametrima;
 * -Konstruktor kopije;
 * -Geter za statičko polje;
 * -Metodu bool slikaj() koja umanjuje vrednost polja freeSpace za vrednost polja megaPikseli,
 *  pod uslovom da ima dovoljno memorije (da je freeSpace>=megaPikseli). Metoda vraća true
 *  ukoliko je došlo do uspešnog slikanja, a u suprotnom false.
 *
 * Iz klase Kamera izvesti klasu VideoKamera. Klasa treba da sadrži polje: videoCounter (statičko polje tipa
 * int). Za klasu je potrebno implementirati:
 * -Konstruktor bez parametara;
 * -Konstruktor sa parametrima;
 * -Geter za statičko polje;
 * -Metodu bool snimaj(int sekunde) koja umanjuje vrednost polja freeSpace za proizvod
 *  vrednosti polja megaPikseli i vrednosti parametra sekunde, pod uslovom da ima dovoljno
 *  memorije (da je freeSpace>=megaPikseli*sekunde). Metoda vraća true ukoliko je došlo do
 *  uspešnog snimanja, a u suprotnom false.
 *
 * Iz klase Telefon izvesti klasu TelefonGen2. Klasa treba da sadrži polje: k (Kamera). Za klasu je potrebno
 * implementirati:
 * -Konstruktor bez parametara;
 * -Konstruktor sa parametrima;
 * -Metodu bool slikajSliku() koja treba da pozove i vrati isto što i metoda slikaj() klase Kamera
 *
 * Iz klase TelefonGen2 izvesti klasu TelefonGen3. Klasa treba da sadrži polje: vk (VideoKamera). Za klasu
 * je potrebno implementirati:
 * -Konstruktor bez parametara;
 * -Konstruktor sa parametrima;
 * -Metodu bool snimiVideo(int sec) koja treba da pozove i vrati isto što i metoda snimaj(int
 *  sekunde) klase VideoKamera.
 *
 * Statičko polje photoCounter treba da vodi računa koliko je slika ukupno slikano, a statičko polje
 * videoCounter treba da vodi računa koliko je videa ukupno snimano!
 *
 * Napisati test program i testirati sve realizovane konstruktore i metode.
 */
#include "TelefonGen3.hpp"

// main() preuzet sa vežbi
int main() {
    cout << endl << endl << "TESTIRANJE KLASE TELEFON" << endl << endl;

    Telefon t, t1("111-222");

    if(t.pozovi("222-333")) {
        cout << "Broj 22-333 uspesno pozvao broj 222-333." << endl;
    } else {
        cout << "Broj 22-333 neuspesno pozvao broj 222-333." << endl;
    }

    if(t1.pozovi("222-333")) {
        cout << "Broj 111-222 uspesno pozvao broj 222-333." << endl;
    } else {
        cout << "Broj 111-222 neuspesno pozvao broj 222-333." << endl;
    }



    cout << endl << endl << "TESTIRANJE KLASE KAMERA" << endl << endl;

    Kamera k, k1(128, 1000), k2(k1);

    cout << "Trenutno uslikanih slika: " << k.getPhotoCounter() << endl;

    if(k.slikaj()) {
        cout << "Uspesno slikanje." << endl;
    } else {
        cout << "Neuspesno slikanje." << endl;
    }

    if(k1.slikaj()) {
        cout << "Uspesno slikanje." << endl;
    } else {
        cout << "Neuspesno slikanje." << endl;
    }

    if(k2.slikaj()) {
        cout << "Uspesno slikanje." << endl;
    } else {
        cout << "Neuspesno slikanje." << endl;
    }

    cout << "Trenutno uslikanih slika: " << k.getPhotoCounter() << endl;



    cout << endl << endl << "TESTIRANJE KLASE KAMERA" << endl << endl;

    VideoKamera vk, vk1(128, 1000);

    cout << "Trenutno snimljenih videa: " << vk.getVideoCounter() << endl;

    if(vk.snimaj(3)) {
        cout << "Uspesno snimanje." << endl;
    } else {
        cout << "Neuspesno snimanje." << endl;
    }

    if(vk1.snimaj(11)) {
        cout << "Uspesno snimanje." << endl;
    } else {
        cout << "Neuspesno snimanje." << endl;
    }

    cout << "Trenutno snimljenih videa: " << vk.getVideoCounter() << endl;



    cout << endl << endl << "TESTIRANJE KLASE TELEFONGEN2" << endl << endl;

    TelefonGen2 tg, tg1(128, 1000, "111-222");

    cout << "Trenutno uslikanih slika: " << k.getPhotoCounter() << endl;

    if(tg.slikajSliku()) {
        cout << "Uspesno slikanje." << endl;
    } else {
        cout << "Neuspesno slikanje." << endl;
    }

    if(tg1.slikajSliku()) {
        cout << "Uspesno slikanje." << endl;
    } else {
        cout << "Neuspesno slikanje." << endl;
    }

    cout << "Trenutno uslikanih slika: " << k.getPhotoCounter() << endl;



    cout << endl << endl << "TESTIRANJE KLASE TELEFONGEN3" << endl << endl;

    TelefonGen3 tgg, tgg1(2, 200, "061666999");

    cout << "Trenutno uslikanih slika: " << vk.getPhotoCounter() << endl;
    cout << "Trenutno snimljenih videa: " << vk.getVideoCounter() << endl;

    if(tgg.slikajSliku()) {
        cout << "Uspesno slikanje." << endl;
    } else {
        cout << "Neuspesno slikanje." << endl;
    }

    if(tgg1.slikajSliku()) {
        cout << "Uspesno slikanje." << endl;
    } else {
        cout << "Neuspesno slikanje." << endl;
    }

    if(tgg.snimiVideo(3)) {
        cout << "Uspesno snimanje." << endl;
    } else {
        cout << "Neuspesno snimanje." << endl;
    }

    if(tgg1.snimiVideo(10)) {
        cout << "Uspesno snimanje." << endl;
    } else {
        cout << "Neuspesno snimanje." << endl;
    }

    cout << "Trenutno uslikanih slika: " << vk.getPhotoCounter() << endl;
    cout << "Trenutno snimljenih videa: " << vk.getVideoCounter() << endl;


    return 0;
}
