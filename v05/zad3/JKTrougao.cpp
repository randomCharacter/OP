#include "JKTrougao.hpp"

// Konstruktor sa parametrima
JKTrougao::JKTrougao(double a, double b) : Trougao(a, b, b) {}

//Konstruktor kopije
JKTrougao::JKTrougao(const JKTrougao& jkt) : Trougao(jkt.a, jkt.b, jkt.c) {}
