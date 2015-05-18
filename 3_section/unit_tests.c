#include <stdio.h>


#include "unit_tests.h"





void run_tests_array_style(void)
{
    test_func_type **unit_tests = (test_func_type **)&__start_unit_test;
    test_func_type *unit_test = unit_tests[0];


    printf("-----  run_tests_array_style  -----\n");


    int i = 0;
    while(unit_test != (test_func_type *)__stop_unit_test)
    {
       unit_test();
       unit_test = unit_tests[++i];
    }

}



void run_tests_ptr_style(void)
{

    test_func_type **unit_test = (test_func_type **)&__start_unit_test;


    printf("-----  run_tests_ptr_style  -----\n");


    while(unit_test != (test_func_type **)&__stop_unit_test)
    {
       unit_test[0]();
       unit_test++;
    }

}
