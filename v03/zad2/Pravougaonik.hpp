#ifndef PRAVOUGAONIK_HPP_INCLUDED
#define PRAVOUGAONIK_HPP_INCLUDED

class Pravougaonik {
    private:
        double a;
        double b;
    public:
        Pravougaonik(double, double);

        double getA() const;
        double getB() const;
        double getO() const;
        double getP() const;

};

#endif // PRAVOUGAONIK_HPP_INCLUDED
