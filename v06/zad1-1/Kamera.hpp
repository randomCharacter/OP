#ifndef KAMERA_HPP_INCLUDED
#define KAMERA_HPP_INCLUDED

class Kamera {
    protected:
        int megaPikseli;
        int freeSpace;
        static int photoCounter;
    public:
        Kamera(int = 0, int = 0);
        Kamera(Kamera&);

        int getPhotoCounter();

        bool slikaj();
};

#endif // KAMERA_HPP_INCLUDED
