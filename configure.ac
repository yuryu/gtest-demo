#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([gtest-demo], [1.0], [haruka@redhat.com])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_HEADERS([build-aux/config.h])

AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_SRCDIR([src/demo.cc])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_LANG([C++])
AC_PROG_LIBTOOL

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_PROG_CC_C99
AC_C_CONST
AX_CXX_COMPILE_STDCXX_11

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 test/Makefile])
AC_CONFIG_SUBDIRS([gtest])
AC_OUTPUT
