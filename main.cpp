#include <stdio.h>

#include "PieCutter.hpp"

using namespace units;
using namespace units::literals;
using namespace units::length;

int main()
{
    PieCutter piecutter{};
    
    int pieces;
    std::cout << "Provide the number of pieces you want: ";
    std::cin >> pieces;
    auto angle = piecutter.getAnglePerPiece(pieces);
    std::cout << "Each piece needs to have an angle of: " << angle << "\n";

    // auto area = piecutter.getAreaOfPieInAnAwkwardWay(300_cm, 500_mm);
    // std::cout << "Area of this pie is: " << area << " \n";
    
    return 0;
}