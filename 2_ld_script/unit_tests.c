#include <stdio.h>


#include "unit_tests.h"





void run_tests_array_style(void)
{

    test_func_type **unit_tests = &unit_test_start;


    printf("-----  run_tests_array_style  -----\n");
    test_func_type *unit_test1 = unit_tests[0];

    int i = 0;
    while(unit_test1 != unit_test_stop)
    {
       unit_test1();
       unit_test1 = unit_tests[++i];
    }

}



void run_tests_ptr_style(void)
{

    test_func_type **unit_tests = &unit_test_start;

    printf("-----  run_tests_ptr_style  -----\n");
    test_func_type **unit_test = unit_tests;

    while(unit_test != &unit_test_stop)
    {
       unit_test[0]();
       unit_test++;
    }

}
