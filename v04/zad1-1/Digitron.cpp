#include "Digitron.hpp"

// Podrazumevani konstruktor
Digitron::Digitron() {
    this->value = 0;
}

// Konstruktor sa parametrima
Digitron::Digitron(double value) {
    this->value = value;
}

// Konstruktor kopije
Digitron::Digitron(Digitron& d) {
    this->value = d.value;
}

// Geteri
double Digitron::getValue() {
    return this->value;
}

// Seteri
void Digitron::setValue(double value) {
    this->value = value;
}

// Aritmetički operatori
Digitron Digitron::operator-(const Digitron& d) const {
    Digitron t(this->value - d.value);
    return t;
}

Digitron Digitron::operator+(const Digitron& d) const {
    Digitron t(this->value + d.value);
    return t;
}

Digitron Digitron::operator*(const Digitron& d) const {
    Digitron t(this->value * d.value);
    return t;
}

Digitron Digitron::operator/(const Digitron& d) const {
    Digitron t(this->value / d.value);
    return t;
}

// Operatori dodele
Digitron& Digitron::operator=(const Digitron& d) {
    this->value = d.value;
    return *this;
}

Digitron& Digitron::operator+=(const Digitron& d) {
    this->value += d.value;
    return *this;
}

Digitron& Digitron::operator-=(const Digitron& d) {
    this->value -= d.value;
    return *this;
}

Digitron& Digitron::operator*=(const Digitron& d) {
    this->value *= d.value;
    return *this;
}

Digitron& Digitron::operator/=(const Digitron& d) {
    this->value /= d.value;
    return *this;
}

// Prefiksni operator --
Digitron& Digitron::operator--() {
    --this->value;
    return *this;
}

// Postfiksni operator --
Digitron Digitron::operator--(int) {
    Digitron d(this->value);
    this->value--;
    return d;
}

// Prefiksni operator ++
Digitron& Digitron::operator++() {
    ++this->value;
    return *this;
}

// Postfiksni operator ++
Digitron Digitron::operator++(int) {
    Digitron d(this->value);
    this->value++;
    return d;
}

// Operatori poređenja
bool Digitron::operator==(const Digitron& d) const {
    return (this->value == d.value);
}

bool Digitron::operator!=(const Digitron& d) const {
    return (this->value != d.value);
}

// Operatori za stream
istream& operator>>(istream& in, Digitron& d) {
    in >> d.value;
    return in;
}

ostream& operator<<(ostream& out, const Digitron& d) {
    out << d.value;
    return out;
}
