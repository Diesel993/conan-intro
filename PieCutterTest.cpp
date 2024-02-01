#include "gtest/gtest.h"
#include "PieCutter.hpp"
#include <units.h>

class PieCutterTest : public testing::Test
{
    public:
        PieCutterTest() = default;

    protected:
        PieCutter piecutter{};
};

TEST_F(PieCutterTest, WhenNeedTwelvePieces_TheReturnedAngleShouldBe30Deg)
{
    auto result = piecutter.getAnglePerPiece(12);
    EXPECT_EQ(result, 30_deg);
}

TEST_F(PieCutterTest, WhenThePieIs200CmBy100mm_ThenTheAreaOfThePieIsXSqm)
{
    auto area = piecutter.getAreaOfPieInAnAwkwardWay(200_cm, 100_mm);
    EXPECT_EQ(area, 0.2_sq_m);
}