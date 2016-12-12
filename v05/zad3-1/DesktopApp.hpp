#ifndef DESKTOPAPP_HPP_INCLUDED
#define DESKTOPAPP_HPP_INCLUDED

#include "Application.hpp"
#include "Computer.hpp"

class DesktopApp : public Application {
    private:
        typedef Application super;
        Computer minSysReq;
        Computer optimumSysReq;
        static int desInsNo;
    public:
        DesktopApp();
        DesktopApp(const Computer&, const Computer&, char*, double);
        DesktopApp(const DesktopApp&);
        ~DesktopApp();

        void print() const;
        void showInsNo() const;
};

#endif // DESKTOPAPP_HPP_INCLUDED
