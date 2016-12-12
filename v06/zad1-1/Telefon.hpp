#ifndef TELEFON_HPP_INCLUDED
#define TELEFON_HPP_INCLUDED

#include <iostream>

using namespace std;

class Telefon {
    protected:
        string broj;
    public:
        Telefon(string = "");

        bool pozovi(string);
};

#endif // TELEFON_HPP_INCLUDED
