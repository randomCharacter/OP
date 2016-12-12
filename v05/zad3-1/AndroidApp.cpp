#include "AndroidApp.hpp"

// Postavljanje statičkog polja na inicijalnu vrednost
int AndroidApp::andInsNo = 0;

// Konstruktor sa parametrima
AndroidApp::AndroidApp(double minVersion, double targetVersion, double sizeMB) : Application("Java", sizeMB), minVersion(minVersion), targetVersion(targetVersion) {
    andInsNo++;
}

// Konstruktor kopije
AndroidApp::AndroidApp(const AndroidApp& app) : minVersion(app.minVersion), targetVersion(app.targetVersion), Application("Java", app.sizeMB) {
    andInsNo++;
}

// Destruktor
AndroidApp::~AndroidApp() {
    andInsNo--;
}

// Metoda za ispis
void AndroidApp::print() const {
    super::print();
    cout << "MIN VERSION: " << minVersion << endl;
    cout << "TARGET VERSION: " << targetVersion << endl;
}

// Metoda za ispis statičkog polja
void AndroidApp::showInsNo() const {
    cout << "ANDROID APP INSTANCES: " << andInsNo << endl;
}
