#include "PieCutter.hpp"

deg_t PieCutter::getAnglePerPiece(const double pieces)
{
    return 360.0 / pieces;
}

double PieCutter::getAmountOfPieces(const deg degrees)
{
    return 360.0_deg / degrees;
}
