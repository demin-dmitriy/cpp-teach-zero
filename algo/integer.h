/*
    Вычисляет минимум двух чисел.

    3 == min_int(3, 7)
    7 == min_int(8, 7)
*/
inline int min_int(int x, int y)
{
    /* FILL IN */
}

/*
    Вычисляет максимум двух чисел.

    7 == max_int(3, 7)
    8 == max_int(8, 7)
*/
inline int max_int(int a, int b)
{
    /* FILL IN */
}

/*
    Тип трихотомии. Хранит в себе результат сравнения двух чисел: a и b.
    < 0   , если a < b
    == 0  , если a == b
    > 0   , если a > b
*/
typedef int Trichotomy;

inline Trichotomy tri(int a, int b)
{
    /* FILL IN */
}

/*
    Возвращает x ∈ { a, b, c }, такой что
    min { a, b, c } ≤ x ≤ max { a, b, c }.

    5 == middle(3, 5, 7)
    5 == middle(5, 3, 7)
    5 == middle(3, 7, 5)
*/
inline int middle(int a, int b, int c)
{
    /* FILL IN */
}

/*
    Наименьший делитель.
    Находит наименьшее число большее 1, на которое делится нацело x.

    2 == min_divisor(6)
    3 == min_divisor(15)
    5 == min_divisor(5)
*/
inline int min_divisor(int x)
{
    /* FILL IN */
}

/*
    Посчитать биномиальный коэффициент Cⁿₖ используя треугольник Паскаля.

    (
    треугольник Паскаля это вот это соотношение плюс краевые условия
        С(n, k) = C(n-1, k-1) + C(n-1, k)
    )

    Допускается неэффективное решение.

    1 == binomial(4, 0)
    4 == binomial(4, 1)
    6 == binomial(4, 2)
    4 == binomial(4, 3)
    1 == binomial(4, 4)
*/
inline int binomial(int n)
{
    /* FILL IN */
}
