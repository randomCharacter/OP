#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED

#include "DinString.hpp"

#include <iostream>

using namespace std;

class Osoba {
    protected:
        DinString ime;
        DinString prezime;
    public:
        Osoba(char* = "Ime", char* = "Prezime");
        Osoba(const Osoba&);

        DinString getIme() const;
        DinString getPrezime() const;

        void setIme(const DinString& ime);
        void setPrezime(const DinString& prezime);

        virtual void ispis() const;
};

#endif // OSOBA_HPP_INCLUDED
