#ifndef TELEFONGEN2_HPP_INCLUDED
#define TELEFONGEN2_HPP_INCLUDED

#include "Telefon.hpp"
#include "Kamera.hpp"

class TelefonGen2 : public Telefon {
    protected:
        typedef Telefon super;
        Kamera k;
    public:
        TelefonGen2(int = 0, int = 0, string = "");

        bool slikajSliku();
};

#endif // TELEFONGEN2_HPP_INCLUDED
