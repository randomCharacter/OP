#ifndef PHDSTUDENT_HPP_INCLUDED
#define PHDSTUDENT_HPP_INCLUDED

#include "Student.hpp"

class PhDStudent : public Student {
    private:
        typedef Student super;
        double prosecnaOcena;
    public:
        PhDStudent(const char* = "", const char* = "", int = 0, double = 0);
        PhDStudent(const DinString&, const DinString&, int, double);
        PhDStudent(const Osoba&, int, double);
        PhDStudent(const Student&, double);
        PhDStudent(const PhDStudent&);

        void predstaviSe();
};


#endif // PHDSTUDENT_HPP_INCLUDED
