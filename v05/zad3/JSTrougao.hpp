#ifndef JSTROUGAO_HPP_INCLUDED
#define JSTROUGAO_HPP_INCLUDED

#include "JKTrougao.hpp"

class JSTrougao : public JKTrougao {
    public:
        JSTrougao(double = 1);
        JSTrougao(const JSTrougao&);
};

#endif // JSTROUGAO_HPP_INCLUDED
