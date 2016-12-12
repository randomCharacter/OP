#ifndef ANDROIDAPP_HPP_INCLUDED
#define ANDROIDAPP_HPP_INCLUDED

#include "Application.hpp"

class AndroidApp : public Application {
    private:
        typedef Application super;
        double minVersion;
        double targetVersion;
        static int andInsNo;
    public:
        AndroidApp(double = 12, double = 20, double = 12);
        AndroidApp(const AndroidApp&);
        ~AndroidApp();

        void print() const;
        void showInsNo() const;
};

#endif // ANDROIDAPP_HPP_INCLUDED
