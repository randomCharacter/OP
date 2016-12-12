#include "VideoKamera.hpp"

// Postavljanje statičkog polja na inicijalnu vrednost
int VideoKamera::videoCounter = 0;

VideoKamera::VideoKamera(int megaPikseli, int freeSpace) : Kamera(megaPikseli, freeSpace) {}

VideoKamera::VideoKamera(VideoKamera& vk) : Kamera(vk) {}

int VideoKamera::getVideoCounter() {
    return videoCounter;
}

bool VideoKamera::snimaj(int sekunde) {
    if (freeSpace >= megaPikseli * sekunde) {
        freeSpace -= megaPikseli * sekunde;
        return true;
    }
    return false;
}
