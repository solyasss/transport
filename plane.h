#include "transport.h"
#include <iostream>
using namespace std;

class Plane : public Transport
{
public:
    Plane(const string &name, const string &type_petrol);
    virtual ~Plane();
    virtual void print() const;
};
