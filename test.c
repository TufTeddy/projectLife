#include <stdlib.h>
#include "ctest.h"
#include "bibl.h"

CTEST(distance_suite, simple_test) {
    float a=1, b=-70, c=600;
    Square z = func1(a,b,c);
    ASSERT_EQUAL(60, z.res1);
    ASSERT_EQUAL(10, z.res2);
}

