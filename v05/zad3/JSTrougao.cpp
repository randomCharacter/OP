#include "JSTrougao.hpp"

// Konstruktor sa parametrom
JSTrougao::JSTrougao(double a) : JKTrougao(a, a) {}

// Konstruktor kopije
JSTrougao::JSTrougao(const JSTrougao& jst) : JKTrougao(jst.a, jst.b) {}
