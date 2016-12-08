#ifndef VREME_HPP_INCLUDED
#define VREME_HPP_INCLUDED

#include <iostream>

using namespace std;

class Vreme {
    private:
        int sekunde;
    public:
        Vreme(int = 0, int = 0, int = 0);
        Vreme(Vreme&);

        friend Vreme operator-(const Vreme&, const Vreme&);
        friend Vreme operator+(const Vreme&, const Vreme&);

        Vreme& operator=(const Vreme&);
        Vreme& operator+=(const Vreme&);
        Vreme& operator-=(const Vreme&);

        Vreme& operator--();
        Vreme operator--(int);
        Vreme& operator++();
        Vreme operator++(int);

        friend bool operator==(Vreme&, Vreme&);
        friend bool operator!=(Vreme&, Vreme&);
        friend bool operator<(Vreme&, Vreme&);
        friend bool operator<=(Vreme&, Vreme&);
        friend bool operator>(Vreme&, Vreme&);
        friend bool operator>=(Vreme&, Vreme&);

        friend istream& operator>>(istream&, Vreme&);
        friend ostream& operator<<(ostream&, const Vreme&);
};

#endif // VREME_HPP_INCLUDED
