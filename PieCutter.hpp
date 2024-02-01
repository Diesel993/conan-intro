#pragma once

#include "units.h"

using namespace units::angle;
using namespace units::dimensionless;
using namespace units::literals;
using namespace units::length;
using namespace units::area;

static constexpr double PI = 3.14;

class PieCutter
{
    public:
        explicit PieCutter() = default;
    
        degree_t getAnglePerPiece(const scalar_t pieces);
        square_meter_t getAreaOfPieInAnAwkwardWay(const centimeter_t length, const millimeter_t width);
};