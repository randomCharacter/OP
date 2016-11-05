/*
 * v01/zad2-1
 *
 * Napisati program za rad sa dinamički alociranom dvodimenzionalnom
 * kvadratnom matricom.
 *
 * IMPLEMENTIRATI:
 *  -funkciju za unos elemenata matrice
 *  -funkciju koja, na osnovu zadate vrednosti, kao povratnu vrednost
 *   vraća sumu elemenata
 *     1. iznad dijagonale
 *     2. ispod dijagonale ili
 *     3. na dijagonali
 *
 * NAPOMENE:
 *   -dužina matrice se unosi preko konzole
 *   -kvadratna matrica je matrica kod koje je broj redova jednak broju
 *    kolona
 */
#include <iostream>

using namespace std;

int ucitajMatricu(int *A, int n);
int iznadDijagonale(int *A, int n);
int ispodDijagonale(int *A, int n);
int naDijagonali(int *A, int n);

int main() {
    int n;

    cout << "Unesite dimenziju kvadratne matrice:" << endl;
    cin >> n;

    int *A = new int[n*n];

    cout << "Unesite matricu:" << endl;
    ucitajMatricu(A, n);

    cout << "Suma iznad glavne dijagonale je " << iznadDijagonale(A, n) << endl;
    cout << "Suma ispod glavne dijagonale je " << ispodDijagonale(A, n) << endl;
    cout << "Suma na glavnoj dijagonali je " << naDijagonali(A, n) << endl;


    return 0;
}

// Funkcija za učitavanje matrice
int ucitajMatricu(int *A, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i,j];
        }
    }
}

// Funkcija koja računa sumu iznad glavne dijagonale
int iznadDijagonale(int *A, int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            s += A[i,j];
        }
    }
    return s;
}

// Funkcija za računaje sume ispod glavne dijagonale
int ispodDijagonale(int *A, int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            s += A[i,j];
        }
    }
    return s;
}

// Funkcija za računanje sume na glavnoj dijagonali
int naDijagonali(int *A, int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += A[i,i];
    }
    return s;
}
