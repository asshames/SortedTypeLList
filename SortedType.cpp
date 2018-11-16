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
