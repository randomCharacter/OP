#include "TelefonGen2.hpp"

TelefonGen2::TelefonGen2(int megaPikseli, int freeSpace, string broj) : k(megaPikseli, freeSpace), Telefon(broj) {}

bool TelefonGen2::slikajSliku() {
    return k.slikaj();
}
