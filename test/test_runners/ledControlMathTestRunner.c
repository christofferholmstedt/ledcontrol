#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(LedControlMath)
{
	RUN_TEST_CASE(LedControlMath, twoPlusTwoIsFour);
	RUN_TEST_CASE(LedControlMath, twoPlusThreeIsFive);
}
