#pragma once

#include "units.h"

static constexpr double PI = 3.14;

class PieCutter
{
    public:
        explicit PieCutter() = default;
    
        deg_t getAnglePerPiece(const double pieces);
        // rad getAngleInRadPerPiece(const double pieces);
        double getAmountOfPieces(const deg degrees);
        // double getAmountOfPieces(const rad degrees);
};