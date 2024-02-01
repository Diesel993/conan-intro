#include <stdio.h>

#include "PieCutter.hpp"

using namespace units;
using namespace units::literals;
using namespace units::length;

int main()
{
    PieCutter piecutter{};
    // double pieces = piecutter.getAmountOfPieces(30_deg);
    // double angle = piecutter.getAnglePerPiece(12.0);
    auto length = piecutter.implicitMillimeterToMeter(500_mm);
    std::cout << "Hello World \n";
    std::cout << "Length in m: " << length << "\n";
    // std::cout << "If I have 12 guests, every piece needs to be " << angle << " degrees \n";
    return 0;
}