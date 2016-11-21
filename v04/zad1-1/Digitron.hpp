#ifndef DIGITRON_HPP_INCLUDED
#define DIGITRON_HPP_INCLUDED

#include <iostream>

using namespace std;

class Digitron {
    private:
        double value;
    public:
        Digitron();
        Digitron(double);
        Digitron(Digitron&);

        double getValue();
        void setValue(double);

        Digitron operator-(const Digitron&) const;
        Digitron operator+(const Digitron&) const;
        Digitron operator*(const Digitron&) const;
        Digitron operator/(const Digitron&) const;

        Digitron& operator=(const Digitron&);
        Digitron& operator+=(const Digitron&);
        Digitron& operator-=(const Digitron&);
        Digitron& operator*=(const Digitron&);
        Digitron& operator/=(const Digitron&);

        Digitron& operator--();
        Digitron operator--(int);
        Digitron& operator++();
        Digitron operator++(int);

        bool operator==(const Digitron&) const;
        bool operator!=(const Digitron&) const;

        friend istream& operator>>(istream&, Digitron&);
        friend ostream& operator<<(ostream&, const Digitron&);
};

#endif // DIGITRON_HPP_INCLUDED
