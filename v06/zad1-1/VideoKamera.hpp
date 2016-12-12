#ifndef VIDEOKAMERA_HPP_INCLUDED
#define VIDEOKAMERA_HPP_INCLUDED

#include "Kamera.hpp"

class VideoKamera : public Kamera {
    private:
        typedef Kamera super;
        static int videoCounter;
    public:
        VideoKamera(int = 0, int = 0);
        VideoKamera(VideoKamera&);

        int getVideoCounter();

        bool snimaj(int);
};

#endif // VIDEOKAMERA_HPP_INCLUDED
