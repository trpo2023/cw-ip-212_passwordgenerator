#include <ctest.h>
#include <pass_lib/password.h>

CTEST(gen_random_int, correct_input)
{
   int min = 2;
   int max = 55;
   int result = random_int(int min, int max);
   ASSERT_INTERVAL(min, max, result);
} 