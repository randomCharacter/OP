#ifndef TELEFONGEN3_HPP_INCLUDED
#define TELEFONGEN3_HPP_INCLUDED

#include "TelefonGen2.hpp"
#include "VideoKamera.hpp"

class TelefonGen3 : public TelefonGen2 {
    private:
        typedef TelefonGen2 super;
        VideoKamera vk;
    public:
        TelefonGen3(int megaPikseli = 0, int freeSpace = 0, string broj = "");

        bool snimiVideo(int sec);
};

#endif // TELEFONGEN3_HPP_INCLUDED
