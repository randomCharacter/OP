#include "Vreme.hpp"

int main() {
    Vreme v1, v2(10), v3(20, 30), v4(40, 50, 60), v5(v4);

    cout << "Vreme 1: " << v1;
    cout << "Vreme 2: " << v2;
    cout << "Vreme 3: " << v3;
    cout << "Vreme 4: " << v4;
    cout << "Vreme 5: " << v5;

    cout << endl;

    // poziv preklopljenog operatora za proveru jednakosti
    cout << "Vreme 4 == Vreme 5 " << ((v4 == v5) ? "Da" : "Ne") << endl;

    // poziv preklopljenog operatora za proveru nejednakosti
    cout << "Vreme 4 != Vreme 5 " << ((v4 != v5) ? "Da" : "Ne") << endl;

        // poziv preklopljenog operatora <
    cout << "Vreme 4 < Vreme 5 " << ((v4 < v5) ? "Da" : "Ne") << endl;

        // poziv preklopljenog operatora <=
    cout << "Vreme 4 <= Vreme 5 " << ((v4 <= v5) ? "Da" : "Ne") << endl;

        // poziv preklopljenog operatora >
    cout << "Vreme 4 > Vreme 5 " << ((v4 > v5) ? "Da" : "Ne") << endl;

        // poziv preklopljenog operatora >=
    cout << "Vreme 4 >= Vreme 5 " << ((v4 >= v5) ? "Da" : "Ne") << endl;

    cout << endl;

    cout << "Vreme 1: " << v1;
    cout << "Vreme 2: " << v2;
    cout << "Vreme 1 = Vreme 2" << endl;

    // poziv preklopljenog operatora dodele =
    v1 = v2;
    cout << "Vreme 1: " << v1;
    cout << "Vreme 2: " << v2;

    cout << endl;

    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora prefiksni ++
    cout << "Vreme 1: ++v1 " << ++v1;
    cout << "Vreme 1: " << v1;

    cout << endl;

    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora postfiskni ++
    cout << "Vreme 1: v1++ " << v1++;
    cout << "Vreme 1: " << v1;

    cout << endl;

    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora prefiksni --
    cout << "Vreme 1: --v1 " << --v1;
    cout << "Vreme 1: " << v1;

    cout << endl;

    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora postfiksni --
    cout << "Vreme 1: v1-- " << v1--;
    cout << "Vreme 1: " << v1;

    cout << endl;
    cout << "Vreme 1: " << v1;
    cout << "Vreme 4: " << v4;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenih operatora - i =
    v3 = v1 - v4;
    cout << "v3 = v1 - v4: " << v3;

    cout << endl;

    cout << "Vreme 1: " << v1;
    cout << "Vreme 4: " << v4;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenih operatora + i =
    v3 = v1 + v4;
    cout << "v3 = v1 + v4: " << v3;

    cout << endl;

    cout << "Vreme 1: " << v1;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenog operatora -=
    v3 -= v1;
    cout << "v3 -= v1: " << v3;

    cout << endl;

    cout << "Vreme 1: " << v1;
    cout << "Vreme 3: " << v3;
    // poziv preklopljenog operatora +=
    v3 += v1;
    cout << "v3 += v1: " << v3;

    cout << endl;

    cout << "Vreme 1: " << v1;
    // poziv preklopljenog operatora +=
    cout << "Unesite novu vrednost sekundi za objekat 'Vreme 1': ";
    cin >> v1;
    cout << "Vreme 1: " << v1;

    return 0;
}
