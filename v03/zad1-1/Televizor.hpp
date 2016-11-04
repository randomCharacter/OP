#ifndef TELEVIZOR_HPP_INCLUDED
#define TELEVIZOR_HPP_INCLUDED

#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

enum Stanje_televizora {UKLJUCEN, ISKLJUCEN, POKVAREN};

class Televizor {

    private:
        Stanje_televizora stanje;
        int zvuk;
        int kanal;
    public:
        Televizor();
        Televizor(Televizor &t);

        bool ukljuci();
        bool iskljuci();
        bool pokvari();
        bool popravi();
        bool pojacajZvuk();
        bool smanjiZvuk();
        bool sledeciKanal();
        bool prethodniKanal();
        string getStanje() const;
        int getZvuk() const;
        int getKanal() const;

};


#endif // TELEVIZOR_HPP_INCLUDED
