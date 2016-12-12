#include "TelefonGen3.hpp"

TelefonGen3::TelefonGen3(int megaPikseli, int freeSpace, string broj) : vk(megaPikseli, freeSpace), TelefonGen2(megaPikseli, freeSpace, broj) {}

bool TelefonGen3::snimiVideo(int sec) {
    vk.snimaj(sec);
}
