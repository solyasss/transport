#include "ship.h"
#include <iostream>
using namespace std;

Ship::Ship(const string &name, const string &type_petrol)
    : Transport(name, type_petrol) {}

Ship::~Ship() {}

void Ship::print() const
{
    cout << "Ship:" << endl;
    Transport::print();
}
