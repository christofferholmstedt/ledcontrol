#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([ledcontrol], [0.1.0], [christoffer@christofferholmstedt.se])
AM_INIT_AUTOMAKE([subdir-objects])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([Makefile
		 src/Makefile
		 test/Makefile])

# Set CFLAGS
LEDCONTROL_TOOLS_CFLAGS="-Wall -Werror"
AC_SUBST([LEDCONTROL_TOOLS_CFLAGS])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_OUTPUT
