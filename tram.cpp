#include "tram.h"
#include <iostream>
using namespace std;

Tram::Tram(const string &name, const string &type_petrol)
    : Transport(name, type_petrol) {}

Tram::~Tram() {}

void Tram::print() const
{
    cout << "Tram:" << endl;
    Transport::print();
}
