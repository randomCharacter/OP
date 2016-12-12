#ifndef UCIONICA_HPP_INCLUDED
#define UCIONICA_HPP_INCLUDED

#include "DinString.hpp"
#include "List.hpp"
#include "Student.hpp"
#include "Profesor.hpp"

class Ucionica {
    private:
        DinString naziv;
        List<Osoba> osobe;
        int maxOsoba;
    public:
        Ucionica(int);

        DinString getNaziv();

        void setNaziv(const DinString&);

        bool dodaj(const Osoba&);
        void ispis();
};

#endif // UCIONICA_HPP_INCLUDED
