#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include <iostream>

#include "DinString.hpp"

class Osoba {
    protected:
        DinString ime;
        DinString prezime;
    public:
        Osoba(const char* = "", const char* = "");
        Osoba(const DinString&, const DinString&);
        Osoba(const Osoba&);

        void predstaviSe();
};

#endif // OSOBA_HPP_INCLUDED
