/*
 * v05/zad3-1
 *
 * Data je klasa DinString. Realizovati softver za IT kompaniju koja se bavi razvojem aplikacija (desktop i
 * android aplikacija) gde se beleži broj razvijenih aplikacija, kao i broj svake od vrsta razvijanih aplikacija, i
 * njihove specifikacije.
 *
 * Napisati klasu Computer. Klasa treba da sadrži polja: hddGB (double), ramGB (double), gCard
 * (DinString), os (DinString). Za klasu je potrebno implementirati:
 * -Konstruktor bez parametara;
 * -Konstruktor sa parametrima (double, double, char*, char*);
 * -Konstruktor kopije;
 * -Metodu void print() const koja ispisuje na konzolu vrednosti svih polja.
 *
 * Napisati klasu Application. Klasa treba da sadrži polja: language (DinString), sizeMB (double), author
 * (DinString), instancesNo (statičko polje tipa int). Za klasu je potrebno implementirati:
 * -Konstruktor bez parametara;
 * -Konstruktor sa parametrima (char*, double) //prvi za setovanje polja language, drugi za
 *  setovanje polja sizeMB (polje author postaviti na naziv kompanije direktno u konstruktoru);
 * -Konstruktor kopije;
 * -Destruktor (da umanjuje broj instanci);
 * -Metodu void print() const koja ispisuje na konzolu vrednosti svih polja osim statičkih;
 * -Metodu void showInsNo() const koja ispisuje na konzolu vrednost statičkog polja.
 *
 * Iz klase Application izvesti klasu AndroidApp. Klasa treba da sadrži polja: minVersion (double),
 * targetVersion (double), andInsNo (statičko polje tipa int). Za klasu je potrebno implementirati:
 * -Konstruktor bez parametara //polje language postaviti na vrednost „Java“ direktno u
 *  konstruktoru;
 * -Konstruktor sa parametrima (double, double, double) //prvi za setovanje polja minVersion,
 *  drugi za setovanje polja targetVersion, treći za setovanje polja sizeMB (polje language
 *  postaviti na vrednost „Java“ direktno u konstruktoru);
 * -Konstruktor kopije;
 * -Destruktor (da umanjuje broj instanci);
 * -Redefinisanu metodu void print() const koja ispisuje na konzolu vrednosti svih polja osim
 *  statičkih (uključujući i nasleđena ne statička polja);
 * -Redefinisanu metodu void showInsNo() const koja ispisuje na konzolu vrednost statičkog
 *  polja (ne uključujući nasleđena statička polja).
 *
 * Iz klase Application izvesti klasu DesktopApp. Klasa treba da sadrži polja: minSysReq (Computer),
 * optimumSysReq (Computer), desInsNo (statičko polje tipa int). Za klasu je potrebno implementirati:
 * -Konstruktor bez parametara //polje language postaviti na vrednost „Java“ direktno u
 *  konstruktoru;
 * -Konstruktor sa parametrima (const Computer&, const Computer&, char*, double) //prvi za
 *  setovanje polja minSysReq, drugi za setovanje polja optimumSysReq, treći za setovanje
 *  polja language, četvrti za setovanje polja sizeMB;
 * -Konstruktor kopije;
 * -Destruktor (da umanjuje broj instanci);
 * -Redefinisanu metodu void print() const koja ispisuje na konzolu vrednosti svih polja osim
 *  statičkih (uključujući i nasleđena ne statička polja);
 * -Redefinisanu metodu void showInsNo() const koja ispisuje na konzolu vrednost statičkog
 *  polja (ne uključujući nasleđena statička polja).
 *
 * Napisati test program i testirati sve realizovane konstruktore i metode.
 */
#include "AndroidApp.hpp"
#include "DesktopApp.hpp"

// main() preuzet sa vežbi
int main() {
    cout<<"*** Testiranje klase Computer ***"<<endl;
    Computer c, c1(2, 4, "1GB any", "WinXP"), c2(c1);

    c.print();
    cout<<endl;
    c1.print();
    cout<<endl;
    c2.print();
    cout<<endl;



    cout<<"*** Testiranje klase Application ***"<<endl;
    Application a, a1("Java", 30), a2(a1);

    a.print();
    a.showInsNo();
    cout<<endl;
    a1.print();
    a1.showInsNo();
    cout<<endl;
    a2.print();
    a2.showInsNo();
    cout<<endl;

    { //da bi se pokazala uloga destruktora
        Application a4(a);

        a.print();
        a.showInsNo();
        cout<<endl;
        a4.print();
        a4.showInsNo();
        cout<<endl;
    } //ovde se automatski poziva destruktor za objekat a4

    a.print();
    a.showInsNo();
    cout<<endl;



    cout<<"*** Testiranje klase AndroidApp ***"<<endl;
    AndroidApp an, an1(8, 15, 23), an2(an1);

    an.print();
    an.showInsNo();
    cout<<endl;
    an1.print();
    an1.showInsNo();
    cout<<endl;
    an2.print();
    an2.showInsNo();
    cout<<endl;

    { //da bi se pokazala uloga destruktora
        AndroidApp an4(an);

        an.print();
        an.showInsNo();
        cout<<endl;
        an4.print();
        an4.showInsNo();
        cout<<endl;

        a1.showInsNo(); //da se vidi ukupan broj aplikacija u ovom momentu
        cout<<endl;
    } //ovde se automatski poziva destruktor za objekat an4

    an.print();
    an.showInsNo();
    cout<<endl;

    a1.showInsNo(); //da se vidi ukupan broj aplikacija u ovom momentu
    cout<<endl;



    cout<<"*** Testiranje klase DesktopApp ***"<<endl;
    DesktopApp d, d1(c1, c, "Ruby", 36), d2(d1);

    d.print();
    d.showInsNo();
    cout<<endl;
    d1.print();
    d1.showInsNo();
    cout<<endl;
    d2.print();
    d2.showInsNo();
    cout<<endl;

    { //da bi se pokazala uloga destruktora
        DesktopApp d4(d);

        d.print();
        d.showInsNo();
        cout<<endl;
        d4.print();
        d4.showInsNo();
        cout<<endl;

        a1.showInsNo(); //da se vidi ukupan broj aplikacija u ovom momentu
        cout<<endl;
    } //ovde se automatski poziva destruktor za objekat d4

    d.print();
    d.showInsNo();
    cout<<endl;

    a1.showInsNo(); //da se vidi ukupan broj aplikacija u ovom momentu
    cout<<endl;



    return 0;
}
