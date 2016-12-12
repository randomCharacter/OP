#include "Test.hpp"

Test::Test(char* naziv, int osvojeniPoeni) : naziv(naziv), osvojeniPoeni(osvojeniPoeni) {}

void Test::print() {
    cout << "NAZIV: " << naziv << endl;
    cout << "POENI: " << osvojeniPoeni << endl;
}
