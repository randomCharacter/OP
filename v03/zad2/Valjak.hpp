#ifndef VALJAK_HPP_INCLUDED
#define VALJAK_HPP_INCLUDED

#include <iostream>
#include <iomanip>

#include "Krug.hpp"
#include "Pravougaonik.hpp"

using namespace std;

// Klasa Valjak koja sadrži klase Krug i Pravougaonik
class Valjak {
    private:
        Krug B; // Objekat klase Krug
        Pravougaonik M; // Objekat klase Pravougaonik
    public:
        Valjak(double, double);

        double getR() const;
        double getH() const;
        double getP() const;
        double getV() const;
};

#endif // VALJAK_HPP_INCLUDED
