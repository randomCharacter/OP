#include "Application.hpp"

// Postavljanje statičkog polja na inicijalnu vrednost
int Application::instanceNo = 0;

// Konstruktor sa parametrima
Application::Application(char *language, double sizeMB) : language(language), sizeMB(sizeMB), author("FTN") {
    instanceNo++;
}

// Konstruktor kopije
Application::Application(const Application& app) : language(app.language), sizeMB(app.sizeMB), author("FTN") {
    instanceNo++;
}

// Destruktor
Application::~Application() {
    instanceNo--;
}

// Metoda za ispis
void Application::print() const {
    cout << "LANGUAGE: " << language << endl;
    cout << "SIZE(MB): " << sizeMB << endl;
    cout << "AUTHOR: " << author << endl;
}

// Metoda za ispis statičkog polja
void Application::showInsNo() const {
    cout << "APPLICATION INSTANCES: " << instanceNo << endl;
}
