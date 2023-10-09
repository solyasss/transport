#include "transport.h"
#include "car.h"
#include "ship.h"
#include "plane.h"
#include "tram.h"
#include <iostream>

using namespace std;

int main()
{
    Car car("Audi a5", "Gas");
    Ship ship("Plane", "Diesel");
    Plane plane("Mriya", "Fuel");
    Tram tram("Tram", "Electricity");

    car.print();
    cout << endl;

    ship.print();
    cout << endl;

    plane.print();
    cout << endl;

    tram.print();

    return 0;
}
