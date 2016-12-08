#ifndef TROUGAO_HPP_INCLUDED
#define TROUGAO_HPP_INCLUDED

#include <cmath>

class Trougao {
    protected:
        double a, b, c;
    public:
        Trougao(double = 1, double = 2, double = 3);
        Trougao(const Trougao&);

        double getA() const;
        double getB() const;
        double getC() const;

        void setA(double a);
        void setB(double b);
        void setC(double c);

        double getO() const;
        double getP() const;
};

#endif // TROUGAO_HPP_INCLUDED
