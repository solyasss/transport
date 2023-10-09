#include <iostream>
#include <string>
using namespace std;

class Transport
{
public:
    Transport(const string &name, const string &type_petrol);
    virtual ~Transport();

    const string &get_type_petrol() const;
    void set_type_petrol(const string &type_petrol);

    virtual void print() const;

protected:
    string name;
    string type_petrol;
};

