#ifndef PREDMET_HPP_INCLUDED
#define PREDMET_HPP_INCLUDED

#include "Kolokvijum.hpp"

class Predmet {
    private:
        DinString naziv;
        List<Test*> testovi;
    public:
        Predmet(char * = "");

        void dodajTest(Test&);
        bool polozio();
        int getBodovi();
        void ispis();
};

#endif // PREDMET_HPP_INCLUDED
