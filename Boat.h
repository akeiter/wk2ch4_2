#include <iostream>
#include "Vehicle.h"
using namespace std;

class Boat : public Vehicle
{
public:
    Boat();
    void Drive() override;
};