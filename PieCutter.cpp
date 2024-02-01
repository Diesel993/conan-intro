#include "PieCutter.hpp"


degree_t PieCutter::getAnglePerPiece(const scalar_t pieces)
{
    return 360_deg / pieces;
}

square_meter_t PieCutter::getAreaOfPieInAnAwkwardWay(const centimeter_t length, const millimeter_t width)
{
    return length * width;
}

meter_t PieCutter::implicitMillimeterToMeter(const millimeter_t length)
{
    return length;
}

