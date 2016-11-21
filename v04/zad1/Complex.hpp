#ifndef COMPLEX_HPP_INCLUDED
#define COMPLEX_HPP_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

class Complex {
    private:
        double real;
        double imag;
    public:
        Complex();
        Complex(double, double);
        Complex(const Complex&);

        double getReal();
        double getImag();

        void setReal(double);
        void setImag(double);

        // preklopljeni operatori
        Complex& operator=(const Complex&);
        Complex& operator+=(const Complex&);
        Complex& operator-=(const Complex&);
        Complex& operator*=(const Complex&);
        Complex& operator/=(const Complex&);

        friend Complex operator+(const Complex&, const Complex&);
        friend Complex operator-(const Complex&, const Complex&);
        friend Complex operator*(const Complex&, const Complex&);
        friend Complex operator/(const Complex&, const Complex&);

        const Complex& operator++();
        const Complex operator++(int);

        friend bool operator==(const Complex&, const Complex&);
        friend bool operator!=(const Complex&, const Complex&);

        friend istream& operator>>(istream&, Complex&);
        friend ostream& operator<<(ostream&, Complex&);
};


#endif // COMPLEX_HPP_INCLUDED
