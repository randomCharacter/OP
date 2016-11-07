#ifndef SKOLJKA_HPP_INCLUDED
#define SKOLJKA_HPP_INCLUDED

#include <iostream>

using namespace std;

enum Boja_skoljke {PLAVA, CRVENA, ZELENA};

class Skoljka {
    private:
        Boja_skoljke boja;
    public:
        Skoljka();
        Skoljka(Boja_skoljke);
        Skoljka(Skoljka&);

        void setBoja(Boja_skoljke);

        string getBoja() const;
};

#endif // SKOLJKA_HPP_INCLUDED
