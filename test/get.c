
# include "testing.h"


/**
 * Test timespec_get
 */
TEST_CASE{

	struct timespec data;
	int result;

	result = timespec_get(&data, TIME_UTC);

	TEST_ASSERT(result == TIME_UTC);
	TEST_ASSERT(data.tv_sec > 0);
	TEST_ASSERT(data.tv_nsec > 0);
}
