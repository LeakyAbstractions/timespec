/**
 *
 * @file        timespec.h
 *
 * timespec header file
 *
 * @version     1.0
 * @author      Copyright (c) 2017 Guillermo Calvo
 *
 */

# ifndef TIMESPEC_H
# define TIMESPEC_H

# include <time.h>

# ifndef TIME_UTC
#   define TIME_UTC 1
# endif

# ifndef _TIMESPEC_DEFINED
#   define _TIMESPEC_DEFINED
/** Represents calendar time broken down into seconds and nanoseconds */
struct timespec{
	/** seconds */
	time_t tv_sec;
	/** nanoseconds */
	long tv_nsec;
};
# endif

# ifndef _TIMESPEC_GET_DEFINED
#   define _TIMESPEC_GET_DEFINED
/** Returns the calendar time based on a given time base */
extern int timespec_get(struct timespec * ts, int base);
# endif

# endif
