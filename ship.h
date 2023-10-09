#include "transport.h"
#include <iostream>
using namespace std;

class Ship : public Transport
{
public:
    Ship(const string &name, const string &type_petrol);
    virtual ~Ship();
    virtual void print() const;
};
