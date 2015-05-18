#include <stdio.h>


#include "unit_tests.h"





TEST(A) { printf("Test1\n");}
TEST(B) { printf("Test2\n");}
TEST(C) { printf("Test3\n");}
TEST(D) { printf("Test4\n");}



int main(void)
{

    //tests will be call automatic (see __attribute__((constructor)) )


    return 0; //good job

}
