#include "unity_fixture.h"

static void runAllTests()
{
	RUN_TEST_GROUP(LedControlMath);
}

int main(int argc, const char * argv[])
{
	return UnityMain(argc, argv, runAllTests);
}
