UNITY_ROOT = ../../unity

UNITY_FILES = \
	$(UNITY_ROOT)/src/unity.c \
	$(UNITY_ROOT)/extras/fixture/src/unity_fixture.c

UNITY_INCLUDE = \
	-I$(UNITY_ROOT)/src \
	-I$(UNITY_ROOT)/extras/fixture/src

check_PROGRAMS = alltests

alltests_SOURCES = $(UNITY_FILES)
alltests_CPPFLAGS = $(UNITY_INCLUDE)

TESTS = alltests
