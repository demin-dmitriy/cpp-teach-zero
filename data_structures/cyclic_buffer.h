#pragma once

#include <stddef.h>

/*
    В чистом C очень плохо с обобщённым программированием. В чистом C
    используется примерно два подхода, чтобы реализовать структуры данных
    которые работают для любого типа, и оба совершенно ужасные.

    A. Стереть тип через void*. То есть, например, вместо int, будет хранится
       void* который будет указывать на int.

    B. Превратить каждую функцию в макро.

    Мы не пойдём ни первым, ни вторым путём. Пока что мы реализуем CyclicBuffer
    для типа int, но вместо слова `int` будем везде использовать слово `T`.
*/

#define T int

/*
    Дальнейший код пишется так, будто бы T — произвольный тип.

    Позже, мы превратим все обобщённые с помощью этого define функции в
    шаблонные функции (это фича из C++).
*/

typedef void (*T_destroy)(T*); // Тип функции которая освобождает ресурсы,
                               // которыми владеет T.

inline void int_destroy(int*)
{
    // Для освобождения int, конечно, ничего делать не нужно.
}

struct CyclicBuffer
{
    T* m_memory;
    size_t m_reserved;  // Размер зарезервированной памяти. Максимальное
                        // количество элементов T, которое может хранится в
                        // структуре.
    size_t m_first;     // Номер первого элемента в m_memory.
    size_t m_count;     // Текущее количество элементов T.

    // Инварианты:
    // m_count <= m_reserved
    // m_first < m_reserved
};

/*
    Инициализировать CyclicBuffer, выделив под него reserved памяти.
*/
inline void cbuffer_construct(CyclicBuffer* cbuffer, size_t reserved)
{
    /* FILL IN */
}

/*
    Вернуть указатель на элемент с индексом i.
*/
inline T* cbuffer_at(CyclicBuffer* cbuffer, size_t i)
{
    /* FILL IN */
    return nullptr;
}

/*
    Освободить ресурсы, занимаемые CyclicBuffer.
*/
inline void cbuffer_destroy(CyclicBuffer* cbuffer, T_destroy t_deleter)
{
    /* FILL IN */
}

/*
    Добавить элемент спереди. Его индекс после вставки 0. 
*/
inline void cbuffer_push_front(CyclicBuffer* cbuffer, T value)
{
    /* FILL IN */
}

/*
    Добавить элемент в конец.
*/
inline void cbuffer_push_back(CyclicBuffer* cbuffer, T value)
{
    /* FILL IN */
}

/*
    Убрать элемент спереди.
*/
inline T cbuffer_pop_front(CyclicBuffer* cbuffer)
{
    /* FILL IN */
    return T();
}

/*
    Убрать элемент с конца.
*/
inline T cbuffer_pop_back(CyclicBuffer* cbuffer)
{
    /* FILL IN */
    return T();
}

#undef T
