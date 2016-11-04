#ifndef MACHINE_HPP_INCLUDED
#define MACHINE_HPP_INCLUDED

#include <iostream>

using namespace std;

#define KORAK 20

enum State {sA, sB, sC, sD};

class Machine {
    private:
        State currentState;
        int value;
    public:
        Machine();

        bool metodaX();
        bool metodaY();
        bool metodaZ();
        bool metodaW();

        bool plus();
        bool minus();

        string getCurrentState() const;
        int getValue() const;
};

#endif // MACHINE_HPP_INCLUDED
