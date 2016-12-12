/*
 * v07/zad1
 *
 * U programskom jeziku C++ napisati generičku klasu Niz koja modeluje niz koji je
 * dužine D i tipa T.
 *
 * Generičku klasu Niz testirati sa konkretizacijom Niz <int, 10>.
 */
#include "Niz.hpp"

// main() preuzet sa vežbi
int main() {

    Niz<int,10> iNiz1, iNiz2;

    iNiz1.insertNiz(1);
    iNiz1.insertNiz(2);
    iNiz1.insertNiz(3);
    iNiz1.insertNiz(4);
    iNiz1.insertNiz(5);
    iNiz1.insertNiz(6);
    iNiz1.printNiz();

    iNiz2 = iNiz1;
    if(iNiz1 == iNiz2)
        cout << "iNiz1 i iNiz2 su jednaki" << endl;
    else
        cout << "iNiz1 i iNiz2 nisu jednaki" << endl;

    return 0;
}

