#include "Student.hpp"

Student::Student() {}

Student::Student(Predmet& pr1, Predmet& pr2) : pr1(pr1), pr2(pr2) {}

void Student::ispis() {
    pr1.ispis();
    pr2.ispis();
}
