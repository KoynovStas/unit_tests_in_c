#include <stdio.h>
#include <stdlib.h>



#include "unit_tests.h"




int test_1(struct test_info_t  *test_info)
{

    TEST_INIT;

    //some code

    return TEST_PASSED;
}



int test_2(struct test_info_t  *test_info)
{

    TEST_INIT;

    int i = 0;
    int ret;

    ret = 0;
    i   = 2;

    if( (i != 2) ||  (ret != 0) )
        return TEST_BROKEN;


    return TEST_PASSED;
}



ptest_func tests[] =
{

    test_1,
    test_2,

};



int main(void)
{

    RUN_TESTS(tests);

    return 0;
}
