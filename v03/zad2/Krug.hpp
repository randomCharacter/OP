#ifndef KRUG_HPP_INCLUDED
#define KRUG_HPP_INCLUDED

#include <cmath>

class Krug {
    private:
        double r;
    public:
        Krug(double);

        double getR() const;
        double getO() const;
        double getP() const;
};

#endif // KRUG_HPP_INCLUDED
