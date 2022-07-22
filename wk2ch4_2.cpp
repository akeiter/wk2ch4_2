#include <iostream>
#include "Boat.h"
#include "Car.h"
#include "Airplane.h"
using namespace std;


int main()
{   
    Airplane* a = new Airplane;
    Boat* b = new Boat;
    Car* c = new Car;

    a->Drive();
    b->Drive();
    c->Drive();
    
}