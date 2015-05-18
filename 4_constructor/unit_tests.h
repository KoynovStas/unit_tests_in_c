#ifndef UNIT_TESTS_HEADER
#define UNIT_TESTS_HEADER





#define TEST_CAT(X, Y)  TEST_CAT_(X, Y)
#define TEST_CAT_(X, Y) X##Y



typedef void test_func_type(void);



#define TEST(name) \
    static void __attribute__((constructor)) __attribute__ ((used)) TEST_CAT(name, __LINE__)(void)





#endif //UNIT_TESTS_HEADER
