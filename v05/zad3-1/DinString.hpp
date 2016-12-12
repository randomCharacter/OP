#ifndef DINSTRING_HPP_INCLUDED
#define DINSTRING_HPP_INCLUDED
#include <iostream>

using namespace std;

class DinString {
    private:
        int duzina;
        char *text;
    public:
        DinString();
        DinString(const char[]);
        DinString(const DinString&);
        ~DinString();

        int length() const;

        char& operator[] (int);
        char operator[] (int) const;

        DinString& operator=(const DinString&);
        DinString& operator+=(const DinString&);

        friend bool operator==(const DinString&, const DinString&);
        friend bool operator!=(const DinString&, const DinString&);

        friend DinString operator+(const DinString&, const DinString&);

        friend ostream& operator<<(ostream&, const DinString&);
};


#endif // DINSTRING_HPP_INCLUDED
