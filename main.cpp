#include <stdio.h>

#include "PieCutter.hpp"

int main()
{
    PieCutter piecutter();
    double pieces = piecutter.getAmountOfPieces(30_deg);
    double angle = piecutter.getAnglePerPiece(12.0);

    std::cout << "If I have 12 guests, every piece needs to be " << angle << " degrees \n";
    return 0;
}