#include "Machine.hpp"

Machine::Machine() {
    currentState = sC;
    value = 80;
}

bool Machine::metodaX() {
    if (currentState == sB || currentState == sC) {
        currentState = sA;
        return true;
    }
    return false;
}

bool Machine::metodaY() {
    if (currentState == sB || currentState == sD) {
        currentState = sC;
        value = 80;
        return true;
    }
    return false;
}

bool Machine::metodaZ() {
    if (currentState == sA) {
        currentState = sB;
        value = 0;
        return true;
    }
    return false;
}

bool Machine::metodaW() {
    if (currentState == sA) {
        currentState = sD;
        value = 0;
    }
}

bool Machine::plus() {
    if (currentState == sA && value + KORAK <= 80) {
        value += KORAK;
        return true;
    }
    return false;
}

bool Machine::minus() {
    if (currentState == sA && value - KORAK >= 0) {
        value -= KORAK;
        return true;
    }
    return false;
}

string Machine::getCurrentState() const {
    switch(currentState) {
        case sA:
            return "sA";
        case sB:
            return "sB";
        case sC:
            return "sC";
        case sD:
            return "sD";
        default:
            return "Greska";
    }
}

int Machine::getValue() const {
    return value;
}
