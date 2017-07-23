#
# timespec
#
# Copyright (c) 2017 Guillermo Calvo
# Licensed under the GNU Lesser General Public License
#

AUTOMAKE_OPTIONS = foreign subdir-objects

AM_CFLAGS = -ansi -Wall -Wextra -Werror --pedantic -coverage -O0 -I$(TIMESPEC_PATH)


# Library

TIMESPEC_PATH       = src
TIMESPEC_LIBRARY    = lib/libtimespec.a


# Install

lib_LIBRARIES =                         \
    $(TIMESPEC_LIBRARY)

include_HEADERS =                       \
    src/timespec.h


# Cleanup

CLEANFILES =                            \
    *.log


# timespec library

lib_libtimespec_a_CFLAGS                = -ansi -Wall -Wextra -Werror --pedantic
lib_libtimespec_a_SOURCES               = src/timespec.c
