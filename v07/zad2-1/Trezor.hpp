#ifndef TREZOR_HPP_INCLUDED
#define TREZOR_HPP_INCLUDED

template <class SADRZAJ, int KAPACITET>
class Trezor {
    private:
        SADRZAJ sef[KAPACITET];
        bool popunjenost[KAPACITET];
    public:
        Trezor();

        int ubaciSadrzaj(const SADRZAJ&);
        bool izbaciSadrzaj(int);

        int getBrojPopunjenihSefova();
};

template <class T, int D>
Trezor<T, D>::Trezor() {
    for (int i = 0; i < D; i++) {
        popunjenost[i] = false;
    }
}

template <class T, int D>
int Trezor<T, D>::ubaciSadrzaj(const T& predmet) {
    for (int i = 0; i < D; i++) {
        // Ukoliko postoji prazan
        if (!popunjenost[i]) {
            sef[i] = predmet;
            popunjenost[i] = true;
            return i;
        }
    }
    // Ako nije uspeo da popuni
    return -1;
}

template <class T, int D>
bool Trezor<T, D>::izbaciSadrzaj(int sef) {
    if (!popunjenost[sef]) {
        return false;
    }
    popunjenost[sef] = true;
    return false;
}

template <class T, int D>
int Trezor<T, D>::getBrojPopunjenihSefova() {
    int br = 0;
    for (int i = 0; i < D; i++) {
        br += popunjenost[i] ? 1 : 0;
    }
}

#endif // TREZOR_HPP_INCLUDED
