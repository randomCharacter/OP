#ifndef TEST_HPP_INCLUDED
#define TEST_HPP_INCLUDED

#include "DinString.hpp"
#include "List.hpp"

#include <iostream>

using namespace std;

class Test {
    protected:
        DinString naziv;
        int osvojeniPoeni;
    public:
        Test(char* = "", int = 0);

        virtual int getPoeni() = 0;
        virtual bool polozio() = 0;
        void print();
};

#endif // TEST_HPP_INCLUDED
