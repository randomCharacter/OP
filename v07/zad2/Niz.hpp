#ifndef NIZ_HPP_INCLUDED
#define NIZ_HPP_INCLUDED

#include <iostream>

using namespace std;

// Generička klasa T biće zamenjena prosleđenom klasom prilikom instanciranja
template <class T, int D>
class Niz {
    private:
        T el[D];
        int brEl;
    public:
        Niz();
        ~Niz();

        int getBrEl() const;

        T operator[](int i) const;
        T& operator[](int i);
        Niz<T, D>& operator=(const Niz<T, D>&);

        bool printNiz() const;
        bool insertNiz(const T&);
};

// Metode moraju biti napisane u header-u zbog kompajliranja
// http://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file

// Konstruktor
template <class T, int D>
Niz<T, D>::Niz() : brEl(0) {}

// Destruktor
template <class T, int D>
Niz<T, D>::~Niz() {}

// Geter za brEL
template <class T, int D>
int Niz<T, D>::getBrEl() const {
    return brEl;
}

// Operatori indeksiranja
template <class T, int D>
T Niz<T, D>::operator[](int i) const {
    return el[i];
}

template <class T, int D>
T& Niz<T, D>::operator[](int i) {
    return el[i];
}

// Operator dodele
template <class T, int D>
Niz<T, D>& Niz<T, D>::operator=(const Niz<T, D>& rn) {
    for(brEl = 0; brEl < rn.brEl; brEl++)
        el[brEl] = rn[brEl];
    return *this;
}

// Metoda za štampanje
template <class T, int D>
bool Niz<T, D>::printNiz() const {
    cout << "[ ";
    for(int i = 0; i < brEl - 1; i++)
        cout << el[i] << ", ";
    cout << el[brEl - 1] << " ]" << endl;
}

//
template <class T, int D>
bool Niz<T, D>::insertNiz(const T& t) {
    if (brEl < D) {
        el[brEl] = t;
        brEl++;
        return true;
    }
    else
        return false;
}

template <class T, int D>
bool operator==(const Niz<T, D>& niz1, const Niz<T, D>& niz2) {
    if (niz1.getBrEl() != niz2.getBrEl()) {
        return false;
    }
    for (int i = 0; i < niz1.getBrEl(); i++) {
        if (niz1[i] != niz2[i]) {
            return false;
        }
    }
    return true;
}

template <class T, int D>
bool operator!=(const Niz<T, D>& niz1, const Niz<T, D>& niz2) {
    if (niz1.getBrEl() != niz2.getBrEl()) {
        return true;
    }
    for (int i = 0; i < niz2.getBrEl(); i++) {
        if (niz1[i] != niz2[i]) {
            return true;
        }
    }
    return false;
}

#endif // NIZ_HPP_INCLUDED
