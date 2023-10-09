#include "car.h"
#include <iostream>
using namespace std;

Car::Car(const string &name, const string &type_petrol)
    : Transport(name, type_petrol) {}

Car::~Car() {}

void Car::print() const
{
    cout << "Car:" << endl;
    Transport::print();
}
