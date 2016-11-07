#ifndef AUTO_HPP_INCLUDED
#define AUTO_HPP_INCLUDED

#include "Menjac.hpp"
#include "Skoljka.hpp"

class Auto {
    private:
        Menjac menjac;
        Skoljka skoljka;
    public:
        Auto();
        Auto(int, Tip_menjaca, Boja_skoljke);

        bool setBrzina(int);
        void setBoja(Boja_skoljke);
        void setTipMenjaca(Tip_menjaca);

        int getBrzina() const;
        string getTipMenjaca() const;
        string getBoja() const;

};

#endif // AUTO_HPP_INCLUDED
