#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED

#include "Osoba.hpp"

class Profesor : public Osoba {
    private:
        typedef Osoba super;
        DinString predmet;
    public:
        Profesor(char* = "Ime", char* = "Prezime", char* = "Predmet");
        Profesor(const Profesor&);

        DinString getPredmet();

        void setPredmet(const DinString&);

        void ispis();
};

#endif // PROFESOR_HPP_INCLUDED
