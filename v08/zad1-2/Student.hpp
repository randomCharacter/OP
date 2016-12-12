#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "Osoba.hpp"

class Student : public Osoba {
    private:
        typedef Osoba super;
        int brIndeksa;
    public:
        Student(char* = "Ime", char* = "Prezime", int = 0);
        Student(const Student&);

        int getBrIndeksa() const;

        void setBrIndeksa(int);

        void ispis();
};

#endif // STUDENT_HPP_INCLUDED
