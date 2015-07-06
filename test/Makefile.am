AM_CFLAGS = @LEDCONTROL_TOOLS_CFLAGS@

UNITY_FILES = \
	unity/src/unity.c \
	unity/src/unity.h \
	unity/src/unity_internals.h \
	unity/extras/fixture/src/unity_fixture.c \
	unity/extras/fixture/src/unity_fixture.h \
	unity/extras/fixture/src/unity_fixture_internals.h \
	unity/extras/fixture/src/unity_fixture_malloc_overrides.h

UNITY_INCLUDE = \
	-I@srcdir@/unity/src \
	-I@srcdir@/unity/extras/fixture/src

TEST_FILES = \
	test_runners/allTestRunner.c \
	test_runners/ledControlMathTestRunner.c \
	mathTest.c

check_PROGRAMS = alltests

alltests_SOURCES = $(UNITY_FILES) $(TEST_FILES)
alltests_CPPFLAGS = $(UNITY_INCLUDE)
alltests_CFLAGS = $(AM_CFLAGS)

TESTS = alltests
