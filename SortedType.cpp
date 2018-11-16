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
    make_empty();
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

template<class ItemType>
void SortedType<ItemType>::make_empty()
{
    length=0;
    currentPos=-1;
}

template<class ItemType>
bool SortedType<ItemType>::is_emptyy()
{
    return(length==0);
}

