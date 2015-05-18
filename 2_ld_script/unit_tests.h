#ifndef UNIT_TESTS_HEADER
#define UNIT_TESTS_HEADER





#define TEST_CAT(X, Y)  TEST_CAT_(X, Y)
#define TEST_CAT_(X, Y) X##Y



typedef void test_func_type(void);



#define TEST(name) \
    static test_func_type TEST_CAT(name, __LINE__); \
    static test_func_type *TEST_CAT(test_at_, __LINE__) __attribute__((section (".unit_test"))) __attribute__ ((used)) = &TEST_CAT(name, __LINE__); \
    static void TEST_CAT(name, __LINE__)(void)





void run_tests_array_style(void);
void run_tests_ptr_style(void);



test_func_type *unit_test_start;     //see ld script
test_func_type *unit_test_stop;      //see ld script





#endif //UNIT_TESTS_HEADER
