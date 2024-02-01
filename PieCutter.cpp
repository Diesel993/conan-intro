#include "PieCutter.hpp"

#include <units.h>

degree_t PieCutter::getAnglePerPiece(const scalar_t pieces)
{
    return 360_deg / pieces;
}

square_meter_t PieCutter::getAreaOfPieInAnAwkwardWay(const centimeter_t length, 
                                                     const millimeter_t width)
{
    return length * width;
}

