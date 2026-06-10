#include <iostream>
#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;

void SemiTruck::pullOver()
{
    std::cout << name << ": safely pulling over to the shoulder!!!" << std::endl;
    setSpeed(0);
}

void SemiTruck::enterHighway()
{
    std::cout << name << ": hauling cargo onto the highway" << std::endl;
    setSpeed(60);
}
