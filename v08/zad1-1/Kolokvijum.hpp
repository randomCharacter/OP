#ifndef KOLOKVIJUM_HPP_INCLUDED
#define KOLOKVIJUM_HPP_INCLUDED

#include "Test.hpp"

#include <cstdlib>

class Kolokvijum : public Test {
    public:
        Kolokvijum();
        Kolokvijum(char*);

        int getPoeni();
        bool polozio();
};

#endif // KOLOKVIJUM_HPP_INCLUDED
