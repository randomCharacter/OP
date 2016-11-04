#ifndef RERNA_HPP_INCLUDED
#define RERNA_HPP_INCLUDED

#include <iostream>

using namespace std;

enum StanjeRerne {UKLJUCENA, ISKLJUCENA, POKVARENA};

class Rerna {
    private:
        StanjeRerne trenutnoStanje;
        int temperatura;

    public:
        Rerna();
        bool ukljuci();
        bool iskljuci();
        bool pokvari();
        bool popravi();

        bool pojacajTemperaturu();
        bool smanjiTemperaturu();

        string getTrenutnoStanje() const;
        int getTemperatura() const;
};


#endif // RERNA_HPP_INCLUDED
