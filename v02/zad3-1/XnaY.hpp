#ifndef XNAY_H_INCLUDED
#define XNAY_H_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

class XnaY {
    private:
        int x;
        int y;
    public:
        XnaY();
        XnaY(int, int);
        XnaY(XnaY&);

        void setX(int);
        void setY(int);
        void setX_Y(int, int);

        int getX() const;
        int getY() const;
        int getXnaY() const;
};


#endif // XNAY_H_INCLUDED
