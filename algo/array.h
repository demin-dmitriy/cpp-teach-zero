#include <stdbool.h> // Нужен в C чтобы ввести тип bool. В C++ этот тип встроен в язык.

/*
    Находит наименьший элемент в полуинтервале [first; last)
    заданном двумя указателями. Возвращает указатель на наименьший элемент.

    int array[7] = { 8, 3, 1, 0, 5, 5, 9 };

    array + 3 == min_element(array, array + 7);
    array + 2 == min_element(array, array + 3);
    array + 1 == min_element(array, array + 2);
    array + 4 == min_element(array + 4, array + 7);
*/
inline int* argmin(int* first, int* last)
{
    /* FILL IN */
}

/*
    Находит наименьший элемент в полуинтервале [first; last)

    int array[7] = { 8, 3, 1, 0, 5, 5, 9 };

    0 == min_element(array, array + 7);
    1 == min_element(array, array + 3);
    3 == min_element(array, array + 2);
    5 == min_element(array + 4, array + 7);
*/
inline int min_element(int* first, int* last)
{
    /* FILL IN */
}

/*
    Поменять местами значения, на которые указывают указатели.

    int x = 5;
    int y = 7;

    swap(&x, &y);

    7 == x; 5 == y;
*/
inline void swap(int* a, int* b)
{
    /* FILL IN */
}

/*
    Циклически сдвинуть массив чисел вправо.

    int array[5] = { 1, 2, 3, 4, 5 };

    shift_right(array, 5);
    // array == { 5, 1, 2, 3, 4 }
    shift_right(array, 5);
    // array == { 4, 5, 1, 2, 3 }
    shift_right(array, 5);
    // array == { 3, 4, 5, 1, 2 }
*/
inline void shift_right(int* array, int size)
{
    /* FILL IN */
}

/*
    Проверить что диапазон отсортирован по возрастанию.

    int array1[3] = { 1, 2, 3 };
    true == is_sorted(array1);

    int array2[3] = { 3, 2, 1 };
    false == is_sorted(array2);
*/
inline bool is_sorted(int* first, int* last)
{
    /* FILL IN */
}

/*
    Отсортировать по возрастанию элементы в диапазоне [first; last) используя argmin и swap.

    int array[5] = { 3, 4, 9, 5, 8 };

    selection_sort(array, array + 5);
    // array == { 3, 4, 5, 8, 9 }
*/
inline void selection_sort(int* first, int* last)
{
    /* FILL IN */
}

/*
    Находит медиану набора чисел с округлением вниз.

    int array1[5] = { 2, 3, 0, 7, 5 };

    3 == median(array1, array1 + 5);

    int array2[4] = { 9, 4, 0, 7 };

    5 == median(array2, array2 + 4);
*/
inline int median(int* first, int* last)
{
    /* FILL IN */
}

/*
    Находит сумму в полуинтервале [first; last).

    int array[7] = { 8, 3, 1, 0, 5, 5, 9 };

    31 == sum(array, array + 7);
    6 == sum(array + 2, array + 5);
*/
inline int sum(int* first, int* last)
{
    /* FILL IN */
}

/*
    Развернуть диапазон чисел.

    int array[5] = { 1, 2, 3, 4, 5 };

    reverse(array, array + 5);
    // array == { 5, 4, 3, 2, 1 }
*/
inline void reverse(int* first, int* last)
{
    /* FILL IN */
}

/*
    Слить два массива в один новый. (Выделив для него память).

    int array1[3] = { 1, 2, 3 };
    int array2[2] = { 4, 5 };

    int* result = concat(array1, 3, array2, 2);
    // result == { 1, 2, 3, 4, 5 }
    free(result);
*/
inline int* concat(int* array1, int size1, int* array2, int size2)
{
    /* FILL IN */
}
