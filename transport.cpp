#include "transport.h"
#include <iostream>
using namespace std;

Transport::Transport(const string &name, const string &type_petrol)
    : name(name), type_petrol(type_petrol) {}

Transport::~Transport() {}

const string &Transport::get_type_petrol() const
{
    return type_petrol;
}

void Transport::set_type_petrol(const string &type_petrol)
{
    this->type_petrol = type_petrol;
}

void Transport::print() const
{
    cout << " Enter name: " << name << endl;
    cout << "Enter type of petrol: " << type_petrol << endl;
}
