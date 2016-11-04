#include "XnaY.hpp"

XnaY::XnaY() {
    this->x = 1;
    this->y = 1;
}

XnaY::XnaY(int x, int y) {
    this->x = x;
    this->y = y;
}

XnaY::XnaY(XnaY &xy) {
    this->x = xy.getX();
    this->y = xy.getY();
}

void XnaY::setX(int x) {
    this->x = x;
}

void XnaY::setY(int y) {
    this->y = y;
}

void XnaY::setX_Y(int x, int y) {
    this->x = x;
    this->y = y;
}

int XnaY::getX() const {
    return x;
}

int XnaY::getY() const {
    return y;
}

int XnaY::getXnaY() const {
    return pow(x, y);
}
