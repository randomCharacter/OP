/*
 * v01/zad2
 *
 * Napisati program koji vrši sortiranje dinamički alociranog niza čiji elementi se
 * učitavaju preko konzole.
 *
 * IMPLEMENTIRATI:
 *  -funkciju za unos elemenata sa dva argumenta
 *     1. pokazivač na niz
 *     2. dužina niza
 *  -funkciju za sortiranje sa tri argumenta
 *     1. pokazivač na niz
 *     2. dužina niza
 *     3. nabrojivi niz podataka celobrojnog tipa (RASTUCE, OPADAJUCE)
 *  -funkciju za štampanje elemenata sa dva argumenta
 *     1. pokazivač na niz
 *     2. dužina niza
 *
 * NAPOMENE:
 *   -dužina niza se unosi preko konzole
 */
 #include <iostream>

using namespace std;

enum poredak {RASTUCE, OPADAJUCE};

void ucitaj(int *A, int n);
void sortiraj(int *A, int n, poredak p);
void stampaj(int *A, int n);

int main() {
    int n;
    int p;

    cout << "Unesite broj elemenata niza:";
    cin >> n;
    int* A = new int[n];

    // Učitavanje
    cout << "Unesite niz:";
    ucitaj(A, n);

    // Sortiranje
    cout << "Kako zelite da sortirate niz? [0 - RASTUCE, 1 - OPADAJUCE]:";
    cin >> p;
    sortiraj(A, n, (poredak) p);

    // Ispis
    stampaj(A, n);

    return 0;
}

// Funkcija za učitavanje niza dužine n
void ucitaj(int *A, int n) {
    for(int i = 0; i < n; i++) {
            cin >> A[i];
    }
}

// Funkcija za sortiranje
void sortiraj(int *A, int n, poredak p) {
    for(int i = 0; i < n-1; i++) {
        for (int j = i; j < n; j++) {
            if(p == RASTUCE) {
                if (A[i] > A[j]) {
                    int t = A[i];
                    A[i] = A[j];
                    A[j] = t;
                }
            } else {
                if (A[i] < A[j]) {
                    int t = A[i];
                    A[i] = A[j];
                    A[j] = t;
                }
            }
        }
    }
}

// Funkcija za štampanje elemenata
void stampaj(int *A, int n) {
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}
