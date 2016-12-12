#include "DesktopApp.hpp"

// Postavljanje statičkog polja na inicijalnu vrednost
int DesktopApp::desInsNo = 0;

// Podrazumevani konstruktor
DesktopApp::DesktopApp() : Application("Java", 5) {
    desInsNo++;
}

// Konstruktor sa parametrima
DesktopApp::DesktopApp(const Computer& minSysReq, const Computer& optimumSysReq, char *language, double sizeMB) : Application(language, sizeMB), minSysReq(minSysReq), optimumSysReq(optimumSysReq) {
    desInsNo++;
}

// Konstruktor kopije
DesktopApp::DesktopApp(const DesktopApp& app) : Application(app), minSysReq(app.minSysReq), optimumSysReq(app.optimumSysReq) {
    desInsNo++;
}

// Destruktor
DesktopApp::~DesktopApp() {
    desInsNo--;
}

// Metoda za ispis
void DesktopApp::print() const {
    super::print();
    cout << "MIN. SYS. REQ." << endl;
    minSysReq.print();
    cout << "OPT. SYS. REQ." << endl;
    optimumSysReq.print();
}

// Metoda za ispis statičkog polja
void DesktopApp::showInsNo() const {
    cout << "DESKTOP APP INSTANCES: " << desInsNo << endl;
}
