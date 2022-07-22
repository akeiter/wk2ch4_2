#include <iostream>
#include "Vehicle.h"
using namespace std;

class Airplane : public Vehicle
{
public:
    Airplane();
    void Drive() override;
};