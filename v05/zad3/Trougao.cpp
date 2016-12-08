#include "Trougao.hpp"

// Konstruktor sa parametrima
Trougao::Trougao(double a, double b, double c) {
    this->a=a;
    this->b=b;
    this->c=c;
}

// Konstruktor kopije
Trougao::Trougao(const Trougao &t) {
    a=t.a;
    b=t.b;
    c=t.c;
}

// Geteri
double Trougao::getA() const {
    return a;
}

double Trougao::getB() const {
    return b;
}

double Trougao::getC() const {
    return c;
}

// Seteri
void Trougao::setA(double a) {
    this->a=a;
}

void Trougao::setB(double b) {
    this->b=b;
}

void Trougao::setC(double c) {
    this->c=c;
}

// Vraća obim trougla
double Trougao::getO() const {
    return a+b+c;
}

// Vraća površinu trougla
double Trougao::getP() const {
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
