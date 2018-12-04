#pragma once

#include "data_pointer.h"

/*
    Односвязный список (Singly-Linked List).
*/

struct SListNode
{
    // Следующий узел. nullptr, если это последний узел. 
    SListNode*  next;

    // Данные хранящиеся в этом узле. nullptr тогда и только тогда когда
    // это последний узел.
    DataPointer data;
};

struct SList
{
    // Первый узел списка.
    SListNode head;
};

/*
    Note: пустой список состоит из одного узла, у которого next == nullptr и data == nullptr.
*/

/*
    Создать пустой список.
*/
inline SList slist_empty()
{
    /* FILL IN */
}

/*
    Удалить все узлы из списка. Данные при этом не освобождаются.
*/
inline void slist_clear(SList* list)
{
    /* FILL IN */
}

/*
    Удалить все узлы из списка с освобождением данных.
*/
inline void slist_clear_full(SList* list)
{
    /* FILL IN */
}

/*
    Вставить элемент в начало списка.
*/
inline void slist_prepend(SList* list, DataPointer* data)
{
    /* FILL IN */
}

/*
    Длина списка.
*/
inline size_t slist_length(SList* list)
{
    /* FILL IN */
}

/*
    Последний узел списка.
*/
inline SListNode* slist_last_node(SList* list)
{
    /* FILL IN */
}

/*
    Присоединить к концу списка left список right.
    Возвращает узел который раньше был первым в right.
*/
inline SListNode* slist_merge(SList* left, SList* right)
{
    /* FILL IN */
}

/*
    Разрезать список на два. Оставить элементы до cutting_point в том же
    списке, а остальные переместить в новый и вернуть новый список.
*/
inline SList slist_cut(SList* list, SListNode* cutting_point)
{
    /* FILL IN */
}

/*
    P.S.: Не смотря на неплохие теоретические свойства, на практике
    односвязные и двухсвязные списки довольно редко используются. Это связано в
    основном с тем, что современным процессорам дорого работать со
    случайными обращениями к памяти.

    Тем не менее это структура иногда используется. Один пример — это как часть
    других структур данных, например внутри словарей, чтобы запомнить порядок
    добавления элементов. Другой пример, это в функциональных языках, как
    "чисто функциональная структура данных".
*/
