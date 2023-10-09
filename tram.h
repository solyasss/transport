#include "transport.h"
#include <iostream>
using namespace std;


class Tram : public Transport
{
public:
    Tram(const string &name, const string &type_petrol);
    virtual ~Tram();
    virtual void print() const;
};
