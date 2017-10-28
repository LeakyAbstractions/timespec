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


# Documentation

docdir = $(datadir)/doc/timespec
doc_DATA = doc/*


# Cleanup

CLEANFILES =                            \
    *.log                               \
    *.gcda                              \
    *.gcno                              \
    *.gcov                              \
    src/*.gcda                          \
    src/*.gcno                          \
    src/*.gcov                          \
    test/*.gcda                         \
    test/*.gcno                         \
    test/*.gcov


# Check

check_PROGRAMS =                        \
	bin/check/get                       \
	bin/check/null

TESTS =                                 \
	bin/check/get                       \
	bin/check/null


tests: check


# timespec library

lib_libtimespec_a_CFLAGS                = -ansi -Wall -Wextra -Werror --pedantic
lib_libtimespec_a_SOURCES               = src/timespec.c


# timespec tests

bin_check_get_SOURCES                   = src/timespec.c test/get.c
bin_check_null_SOURCES                  = src/timespec.c test/null.c


# coverage

coverage: check timespec.c.gcov

timespec.c.gcov:
	gcov src/timespec.c --object-directory src/*
