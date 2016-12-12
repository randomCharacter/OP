#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "Osoba.hpp"

class Student : public Osoba {
    protected:
        typedef Osoba super;
        int brojIndeksa;
    public:
        Student(const char* = "", const char* = "", int = 0);
        Student(const DinString&, const DinString&, int);
        Student(const Osoba&, int);
        Student(const Student&);

        void predstaviSe();
};


#endif // STUDENT_HPP_INCLUDED
