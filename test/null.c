
# include "testing.h"


/**
 * Test timespec_get(NULL)
 */
TEST_CASE{

	int result;

	result = timespec_get(NULL, TIME_UTC);

	TEST_ASSERT(result == 0);
}
