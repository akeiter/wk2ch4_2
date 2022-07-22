#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
public:
    Car();
    void Drive() override;
};