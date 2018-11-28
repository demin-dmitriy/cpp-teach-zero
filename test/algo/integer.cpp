#include "integer.h"

#include "algo/integer.h"
#include "test/testlib.h"

static void test_min_int(TestContext* test_context)
{
    EXPECT_EQ(3, min_int(3, 7));
    EXPECT_EQ(7, min_int(8, 7));
}

static void test_max_int(TestContext* test_context)
{
    EXPECT_EQ(7, max_int(3, 7));
    EXPECT_EQ(8, max_int(8, 7));
}

static void test_tri(TestContext* test_context)
{
    EXPECT_TRUE(0 < tri(-1, 3));
    EXPECT_TRUE(0 == tri(2, 2));
    EXPECT_TRUE(0 < tri(4, 2));
}

static void test_middle(TestContext* test_context)
{
    EXPECT_EQ(5, middle(3, 5, 7));
    EXPECT_EQ(5, middle(5, 3, 7));
    EXPECT_EQ(5, middle(3, 7, 5));
}

static void test_min_divisor(TestContext* test_context)
{
    EXPECT_EQ(2, min_divisor(6));
    EXPECT_EQ(3, min_divisor(15));
    EXPECT_EQ(5, min_divisor(5));
    EXPECT_EQ(29, min_divisor(1189));
}

static void test_binomial(TestContext* test_context)
{
    EXPECT_EQ(1, binomial(0, 0));

    EXPECT_EQ(1, binomial(1, 0));
    EXPECT_EQ(1, binomial(1, 1));

    EXPECT_EQ(1, binomial(2, 0));
    EXPECT_EQ(2, binomial(2, 1));
    EXPECT_EQ(1, binomial(2, 2));

    EXPECT_EQ(1, binomial(3, 0));
    EXPECT_EQ(3, binomial(3, 1));
    EXPECT_EQ(3, binomial(3, 2));
    EXPECT_EQ(1, binomial(3, 3));

    EXPECT_EQ(1, binomial(4, 0));
    EXPECT_EQ(4, binomial(4, 1));
    EXPECT_EQ(6, binomial(4, 2));
    EXPECT_EQ(4, binomial(4, 3));
    EXPECT_EQ(1, binomial(4, 4));

    EXPECT_EQ(1, binomial(5, 0));
    EXPECT_EQ(5, binomial(5, 1));
    EXPECT_EQ(10, binomial(5, 2));
    EXPECT_EQ(10, binomial(5, 3));
    EXPECT_EQ(5, binomial(5, 4));
    EXPECT_EQ(1, binomial(5, 5));
}

static void test_gcd(TestContext* test_context)
{
    EXPECT_EQ(3, gcd(12, 15));
    EXPECT_EQ(4, gcd(12, 16));
    EXPECT_EQ(3, gcd(15, 12));
    EXPECT_EQ(1, gcd(1, 1));
    EXPECT_EQ(1, gcd(1, 42));
    EXPECT_EQ(1, gcd(42, 1));
    EXPECT_EQ(3, gcd(3, 162));
    EXPECT_EQ(1, gcd(12, 35));
    EXPECT_EQ(5, gcd(10, 25));
}


void run_all_integer_tests()
{
    RUN_TEST(test_min_int);
    RUN_TEST(test_max_int);
    RUN_TEST(test_tri);
    RUN_TEST(test_middle);
    RUN_TEST(test_min_divisor);
    RUN_TEST(test_binomial);
    RUN_TEST(test_gcd);
}