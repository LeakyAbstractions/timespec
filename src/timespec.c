/**
 *
 * @file        timespec.c
 *
 * timespec source code file
 *
 * @version     1.0
 * @author      Copyright (c) 2017 Guillermo Calvo
 *
 */

# include "timespec.h"

# if defined(_WIN32) && !defined(__MINGW32__)

#   include <windows.h>
#   include <winbase.h>

int timespec_get(struct timespec * ts, int base){

	SYSTEMTIME data = {0};
	struct tm tmp = {0};

	if(ts == NULL || base != TIME_UTC){
		return(0);
	}

	GetLocalTime(&data);

	tmp.tm_year     = data.wYear;
	tmp.tm_mon      = data.wMonth;
	tmp.tm_mday     = data.wDay;
	tmp.tm_hour     = data.wHour;
	tmp.tm_min      = data.wMinute;
	tmp.tm_sec      = data.wSecond;
	tmp.tm_isdst    = -1;

	ts->tv_sec  = mktime(&tmp);
	ts->tv_nsec = data.wMilliseconds * 1000;

	return(TIME_UTC);
}

# else

#   ifdef __MINGW32__
#     define gettimeofday mingw_gettimeofday
#   else
#     include <sys/time.h>
#   endif

int timespec_get(struct timespec * ts, int base){

	struct timeval data = {0};
	int result = gettimeofday(&data, NULL);

	if(ts == NULL || base != TIME_UTC){
		return(0);
	}

	ts->tv_sec  = (result != 0 ? 0 : data.tv_sec);
	ts->tv_nsec = (result != 0 ? 0 : data.tv_usec);

	return(result != 0 ? 0 : TIME_UTC);
}

# endif
