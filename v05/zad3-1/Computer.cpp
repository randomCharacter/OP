#include "Computer.hpp"

// Konstruktor sa parametrima
Computer::Computer(double hddGB, double ramGB, char *gCard, char *os) : hddGB(hddGB), ramGB(ramGB), gCard(gCard), os(os) {}

// Konstruktor kopije
Computer::Computer(const Computer& c) : hddGB(c.hddGB), ramGB(c.ramGB), gCard(c.gCard), os(c.os) {}

// Metoda za ispis
void Computer::print() const {
    cout << "HDD MEMORIJA: " << hddGB << endl;
    cout << "RAM MEMORIJA: " << ramGB << endl;
    cout << "GRAFICKA KARTICA: " << gCard << endl;
    cout << "OS: " << os << endl;
}
