#ifndef LEK_HPP_INCLUDED
#define LEK_HPP_INCLUDED

#include "DinString.hpp"
#include "Artikal.hpp"


class Lek : public Artikal {
    private:
        long jkl;
        DinString naziv;
        double jedinicnaCena;
        int kolicina;
    public:
        Lek(long = 0, char* = "", double = 0, int = 0);
        Lek(long, DinString, double, int);
        Lek(const Lek&);

        long getJkl() const;
        DinString getNaziv() const;
        double getJedinicnaCena() const;
        int getKolicina() const;

        void setJkl(long);
        void setNaziv(const DinString&);
        void setJedinicnaCena(double);
        void setKolicina(int);

        double cena();
        void ispis();

};

#endif // LEK_HPP_INCLUDED
