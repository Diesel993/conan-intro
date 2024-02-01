#include <stdio.h>

#include "PieCutter.hpp"

using namespace units;
using namespace units::literals;
using namespace units::length;

int main()
{
    PieCutter piecutter{};
    auto area = piecutter.getAreaOfPieInAnAwkwardWay(300_cm, 500_mm);
    std::cout << "Area of this pie is: " << area << " square meters. \n";
    
    return 0;
}