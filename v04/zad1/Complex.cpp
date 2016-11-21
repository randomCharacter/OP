#include "Complex.hpp"

// Podrazumevani konstruktor
Complex::Complex() {
    this->real = 0;
    this->imag = 0;
}

// Konstruktor sa parametrima
Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

// Konstruktor kopije
Complex::Complex(const Complex& c) {
    this->real = c.real;
    this->imag = c.imag;
}

// Geteri
double Complex::getReal() {
    return this->real;
}

double Complex::getImag() {
    return this->imag;
}

// Seteri
void Complex::setReal(double real) {
    this->real = real;
}

void Complex::setImag(double imag) {
    this->imag = imag;
}

// Operatori dodele
Complex& Complex::operator=(const Complex& c) {
    this->real = c.real;
    this->imag = c.imag;
    return *this;
}

Complex& Complex::operator+=(const Complex& c) {
    this->real += c.real;
    this->imag += c.imag;
    return *this;
}

Complex& Complex::operator-=(const Complex& c) {
    this->real -= c.real;
    this->imag -= c.imag;
    return *this;
}

Complex& Complex::operator*=(const Complex& c) {
    this->real = this->real * c.real - this->imag * c.imag;
    this->imag = this->real * c.imag + c.real * this->imag;
    return *this;
}

Complex& Complex::operator/=(const Complex& c) {
    this->real = (this->real * c.real + this->imag * c.imag) / (pow(this->real, 2) + pow(this->imag, 2));
    this->imag = (c.real * this->imag - this->real * c.imag) / (pow(this->real, 2) + pow(this->imag, 2));
    return *this;
}

// Aritmetički operatori
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

Complex operator*(const Complex& c1, const Complex& c2) {
    return Complex(c1.real * c2.real - c1.imag * c2.imag, c1.real * c2.imag + c2.real * c1.imag);
}

Complex operator/(const Complex& c1, const Complex& c2) {
    return Complex((c1.real * c2.real + c1.imag * c2.imag) / (pow(c2.real, 2) + pow(c1.imag, 2)), (c2.real * c1.imag - c1.real * c2.imag) / (pow(c2.real, 2) + pow(c1.imag, 2)));
}

// Prefiksni ++
const Complex& Complex::operator++() {
    ++this->real;
    ++this->imag;
    return *this;
}

// Postfiksni ++
const Complex Complex::operator++(int) {
    Complex c(this->real, this->imag);
    this->real++;
    this->imag++;
    return c;
}

// Operatori poređenja
bool operator==(const Complex& c1, const Complex& c2) {
    return (c1.real == c2.real && c1.imag == c2.imag);
}

bool operator!=(const Complex& c1, const Complex& c2) {
    return (c1.real != c2.real || c1.imag != c2.imag);
}

//Operatori za stream
istream& operator>>(istream& in, Complex& c) {
    in >> c.real >> c.imag;
    return in;
}

ostream& operator<<(ostream& out, Complex& c) {
    if (c.imag < 0) {
        out << c.real << c.imag << "i";
    } else {
        out << c.real << "+" << c.imag << "i";
    }
    return out;
}
