#ifndef ARTIKAL_HPP_INCLUDED
#define ARTIKAL_HPP_INCLUDED

#include "DinString.hpp"

class Artikal {
    private:
        DinString naziv;
        double cena;
        static int instanci;
    public:
        Artikal(const char[], const double);
        Artikal(const DinString&, const double);
        Artikal(const Artikal&);
        ~Artikal();

        DinString getNaziv() const;
        double getCena() const;

        friend ostream& operator<<(ostream&, const Artikal&);
};


#endif // ARTIKAL_HPP_INCLUDED
