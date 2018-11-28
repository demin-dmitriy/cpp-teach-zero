#include "array.h"

#include "algo/array.h"
#include "test/testlib.h"

#include <stdlib.h>
#include <string.h>

static void test_argmin(TestContext* test_context)
{
    int array[7] = { 8, 3, 1, 0, 5, 5, 9 };

    EXPECT_EQ(array + 3, argmin(array, array + 7));
    EXPECT_EQ(array + 2, argmin(array, array + 3));
    EXPECT_EQ(array + 1, argmin(array, array + 2));
    EXPECT_EQ(array + 4, argmin(array + 4, array + 7));
}

static void test_min_element(TestContext* test_context)
{
    int array[7] = { 8, 3, 1, 0, 5, 5, 9 };

    EXPECT_EQ(0, min_element(array, array + 7));
    EXPECT_EQ(1, min_element(array, array + 3));
    EXPECT_EQ(3, min_element(array, array + 2));
    EXPECT_EQ(5, min_element(array + 4, array + 7));
}

static void test_swap(TestContext* test_context)
{
    int x = 5;
    int y = 7;

    swap(&x, &y);

    EXPECT_EQ(7, x);
    EXPECT_EQ(5, y);

    swap(&x, &y);

    EXPECT_EQ(5, x);
    EXPECT_EQ(7, y);

    swap(&x, &x);

    EXPECT_EQ(5, x);
}

static void test_shift_right(TestContext* test_context)
{
    int array[5] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i != 5; ++i)
    {
        shift_right(array, 5);
        for (int j = 1; j <= 5; ++j)
        {
            EXPECT_EQ(j, array[(i + j) % 5]);
        }
    }
}

static void test_is_sorted(TestContext* test_context)
{
    int array1[3] = { 1, 2, 3 };
    EXPECT_TRUE(is_sorted(array1, array1 + 3));

    int array2[3] = { 3, 2, 1 };
    EXPECT_TRUE(not is_sorted(array2, array2 + 3));

    EXPECT_TRUE(is_sorted(array2, array2));
    EXPECT_TRUE(is_sorted(array2, array2 + 1));
}

static void test_selection_sort(TestContext* test_context)
{
    int array[5] = { 2, 3, 5, 1, 4 };

    selection_sort(array, array + 5);

    EXPECT_EQ(1, array[0]);
    EXPECT_EQ(2, array[1]);
    EXPECT_EQ(3, array[2]);
    EXPECT_EQ(4, array[3]);
    EXPECT_EQ(5, array[4]);
}

static void test_median(TestContext* test_context)
{
    int array1[5] = { 2, 3, 0, 7, 5 };
    int array1_copy[5];
    memcpy(array1_copy, array1, 5);

    EXPECT_EQ(3, median(array1, array1 + 5));
    EXPECT_EQ(0, memcmp(array1, array1_copy, 5));

    int array2[4] = { 9, 4, 0, 7 };
    int array2_copy[4];
    memcpy(array2_copy, array2, 4);

    EXPECT_EQ(5, median(array2, array2 + 4));
    EXPECT_EQ(0, memcmp(array2, array2_copy, 4));

    EXPECT_EQ(9, median(array2, array2 + 1));
    EXPECT_EQ(6, median(array2, array2 + 2));
}

static void test_sum(TestContext* test_context)
{
    int array[7] = { 8, 3, 1, 0, 5, 5, 9 };

    EXPECT_EQ(31, sum(array, array + 7));
    EXPECT_EQ(6, sum(array + 2, array + 5));
}

static void test_reverse(TestContext* test_context)
{
    int array[5] = { 1, 2, 3, 4, 5 };

    reverse(array, array);
    reverse(array, array + 1);
    reverse(array, array + 2);
    EXPECT_EQ(2, array[0]);
    EXPECT_EQ(1, array[1]);
    reverse(array, array + 2);
    reverse(array, array + 5);

    EXPECT_EQ(5, array[0]);
    EXPECT_EQ(4, array[1]);
    EXPECT_EQ(3, array[2]);
    EXPECT_EQ(2, array[3]);
    EXPECT_EQ(1, array[4]);
}

static void test_concat(TestContext* test_context)
{
    int array1[3] = { 1, 2, 3 };
    int array2[2] = { 4, 5 };

    int* result = concat(array1, 3, array2, 2);

    EXPECT_TRUE(nullptr != result);

    if (result == nullptr)
    {
        return;
    }

    EXPECT_EQ(1, result[0]);
    EXPECT_EQ(2, result[1]);
    EXPECT_EQ(3, result[2]);
    EXPECT_EQ(4, result[3]);
    EXPECT_EQ(5, result[4]);

    free(result);
}

void run_all_array_tests()
{
    RUN_TEST(test_argmin);
    RUN_TEST(test_min_element);
    RUN_TEST(test_swap);
    RUN_TEST(test_shift_right);
    RUN_TEST(test_is_sorted);
    RUN_TEST(test_selection_sort);
    RUN_TEST(test_median);
    RUN_TEST(test_sum);
    RUN_TEST(test_reverse);
    RUN_TEST(test_concat);
}
