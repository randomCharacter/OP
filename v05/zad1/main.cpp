/*
 * v05/zad1
 *
 * Zadatak 4.3.3 (DinString).
 */
#include "DinString.hpp"

// main() preuzet sa vežbi
int main() {
    DinString a, b("Dobar"), c("dan");

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cout << endl << "Testiranje +=" << endl;
    cout << "a+=b: " << (a += b) << endl;
    cout << "a+=c: " << (a += c) << endl;

    cout << endl << "Testiranje +" << endl;
    cout << "a=b+c: " << (a = b + c) << endl;
    cout << "a=b+\" \"+c: " << (a = b + " " + c) <<endl;

    cout << endl <<"Testiranje []" << endl;
    char x = a[5];
    cout << "x=a[5] x: " << x << endl;
    a[5] = 'Z';
    cout << "Izvrseno a[5]='Z', sada je a: " << a << endl;

    cout << endl << "Testiranje ==, = i !=" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "a==b? " << (a == b) << endl;
    cout << "a!=b? " << (a != b) << endl;
    a = b;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
