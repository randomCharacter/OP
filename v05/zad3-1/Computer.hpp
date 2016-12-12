#ifndef COMPUTER_HPP_INCLUDED
#define COMPUTER_HPP_INCLUDED

#include "DinString.hpp"

class Computer {
    private:
        double hddGB;
        double ramGB;
        DinString gCard;
        DinString os;
    public:
        Computer(double = 500, double = 4, char* = "Nvidia GeForce GTX 970 or equal", char* = "Win7");
        Computer(const Computer&);

        void print() const;
};

#endif // COMPUTER_HPP_INCLUDED
