#ifndef MENJAC_HPP_INCLUDED
#define MENJAC_HPP_INCLUDED

#include <iostream>

using namespace std;

enum Tip_menjaca {AUTOMATIK, MANUELNI};

class Menjac {
    private:
        int brzina;
        Tip_menjaca tip;
    public:
        Menjac();
        Menjac(int, Tip_menjaca);
        Menjac(Menjac&);

        bool setBrzina(int);
        void setTip(Tip_menjaca);

        int getBrzina() const;
        string getTip() const;

};

#endif // MENJAC_HPP_INCLUDED
