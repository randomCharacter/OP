#ifndef EVIDENCIJALEKOVA_HPP_INCLUDED
#define EVIDENCIJALEKOVA_HPP_INCLUDED

#include "List.hpp"
#include "Lek.hpp"

class EvidencijaLekova {
    private:
        DinString nazivApoteke;
        DinString datum;
        List<Lek> evidencija;
    public:
        EvidencijaLekova();

        DinString getNazivApoteke() const;
        DinString getDatum() const;

        void setNazivApoteke(const DinString&);
        void setDatum(const DinString&);

        bool dodajLek();
        bool dodajLek(const Lek&);
        bool ukloniLek(int);
        void sort();
        void ispis();
};

#endif // EVIDENCIJALEKOVA_HPP_INCLUDED
