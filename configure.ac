#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.


# Autoconf requirements
AC_PREREQ([2.68])


# Initialize package
AC_INIT([timespec], [1.0.0], [timespec@guillermo.dev], [timespec], [https://github.com/LeakyAbstractions/timespec/])


# Information on the package
AC_COPYRIGHT([Copyright 2017 Guillermo Calvo])
AC_REVISION([$PACKAGE_VERSION])
AC_MSG_NOTICE([
 _   _
| | (_)
| |_ _ _ __ ___   ___  ___ _ __   ___  ___
| __| | '_ ` _ \\ / _ \\/ __| '_ \\ / _ \\/ __|
| |_| | | | | | |  __/\\__ \\ |_) |  __/ (__
 \\__|_|_| |_| |_|\\___||___/ .__/ \\___|\\___|
                          | |
  Drop-in replacement for |_| C11 timespec
])


# Check if the source folder is correct
AC_CONFIG_SRCDIR([src/timespec.c])


# Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AC_PROG_RANLIB
AM_PROG_AR


# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([time.h])


# Checks for compiler characteristics
AC_LANG([C])


# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([time])
AC_CHECK_FUNCS([localtime])
AC_CHECK_FUNCS([gmtime])
AC_CHECK_FUNCS([gettimeofday])


# The config file is generated but not used by the source code
#AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
    timespec.pc
    Makefile
])


# Automake initialisation
AM_INIT_AUTOMAKE([
    -Wall
    -Werror
    foreign
	subdir-objects
    no-define
])


AC_OUTPUT
