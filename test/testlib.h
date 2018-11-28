/*
    Минимальная примитивная библиотека для юнит тестирования.

    В своих проектах нужно использовать стороннюю библиотеку, например,
    Google Test. Эта библиотека существует исключительно для того, чтобы
    сделать тестирующий код простым и понятным для новичка.

    Макросы `EXPECT_TRUE` и `EXPECT_EQ` есть и в Google Test.
*/

#pragma once

#define RUN_TEST(test_function)                     \
    testlib_run_test(#test_function, test_function)


#define EXPECT_TRUE(expr)                           \
    if (expr)                                       \
    {                                               \
        testlib_report_success(test_context);       \
    }                                               \
    else                                            \
    {                                               \
        testlib_report_fail(test_context, #expr);   \
    }


#define EXPECT_EQ(left, right)                                      \
    if ((left) == (right))                                          \
    {                                                               \
        testlib_report_success(test_context);                       \
    }                                                               \
    else                                                            \
    {                                                               \
        testlib_report_fail(test_context, #left " == " #right);     \
    }


struct TestContext
{
    int m_error_count;
    int m_check_count;
};

void testlib_report_success(TestContext* test_context);
void testlib_report_fail(TestContext* test_context, const char* description);
void testlib_run_test(const char* name, void (*test_function)(TestContext*));
