#ifndef APPLICATION_HPP_INCLUDED
#define APPLICATION_HPP_INCLUDED

#include "DinString.hpp"

class Application {
    protected:
        DinString language;
        double sizeMB;
        DinString author;
        static int instanceNo;
    public:
        Application(char* = "C++", double = 2.5);
        Application(const Application&);
        ~Application();

        void print() const;
        void showInsNo() const;
};

#endif // APPLICATION_HPP_INCLUDED
