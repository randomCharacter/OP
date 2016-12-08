#ifndef JKTROUGAO_HPP_INCLUDED
#define JKTROUGAO_HPP_INCLUDED

#include "Trougao.hpp"

class JKTrougao : public Trougao {
    public:
        JKTrougao();
        JKTrougao(double = 1, double = 2);
        JKTrougao(const JKTrougao&);
};

#endif // JKTROUGAO_HPP_INCLUDED
