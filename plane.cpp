#include "plane.h"
#include <iostream>
using namespace std;

Plane::Plane(const string &name, const string &type_petrol)
    : Transport(name, type_petrol) {}

Plane::~Plane() {}

void Plane::print() const
{
    cout << "Plane:" << endl;
    Transport::print(); 
}
