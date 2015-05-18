#include <stdio.h>


#include "unit_tests.h"




TEST(A) { printf("Test1\n"); }
TEST(B) { printf("Test2\n"); }
TEST(C) { printf("Test3\n"); }




int main(void)
{


    run_tests_array_style();

    //or

    run_tests_ptr_style();



    return 0;  //good job
}
