#include "SortedType.h"
#include <iostream>
#include <exception>

using namespace std;

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length = 0;
    currentPos = -1;
}

template<class ItemType>
SortedType<ItemType>::~SortedType()
{
    //MakeEmpty();
}

template<class ItemType>
bool SortedType<ItemType>::is_full()
{
    return(length = MAX_ITEMS);
}

template<class ItemType>
int SortedType<ItemType>::get_length()
{
    return length;
}

