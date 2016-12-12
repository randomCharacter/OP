#ifndef DIJAMANT_HPP_INCLUDED
#define DIJAMANT_HPP_INCLUDED

#include <iostream>

using namespace std;

class Dijamant {
    private:
        double vrednost;
        double karat;
    public:
        Dijamant(double = 3, double = 2);
        Dijamant(const Dijamant&);

        double getVrednost();
        double getKarat();
};

#endif // DIJAMANT_HPP_INCLUDED
