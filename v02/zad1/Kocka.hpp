#ifndef KOCKA_HPP_INCLUDED
#define KOCKA_HPP_INCLUDED

#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

class Kocka {
    private:
        int vrednost;

    public:
        Kocka();
        Kocka(const Kocka &);
        Kocka(int);

        void baci();
        int getVrednost() const;
};


#endif // KOCKA_HPP_INCLUDED
