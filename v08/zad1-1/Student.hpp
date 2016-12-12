#ifndef STUDENT_HPP_INCLUDED
#define STUDENT_HPP_INCLUDED

#include "Predmet.hpp"

class Student {
    private:
        Predmet pr1;
        Predmet pr2;
    public:
        Student();
        Student(Predmet&, Predmet&);

        void ispis();
};

#endif // STUDENT_HPP_INCLUDED
