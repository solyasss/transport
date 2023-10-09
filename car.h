#include "transport.h"
#include <iostream>
using namespace std;

class Car : public Transport
{
public:
    Car(const string &name, const string &type_petrol);
    virtual ~Car();
    virtual void print() const;
};
