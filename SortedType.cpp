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

template<class ItemType>
ItemType SortedType<ItemType>::get_item(ItemType item, bool& found)
{
    found = false;
    int low = 0;
    int high = length-1;
    int mid = (low+high)/2;
    bool moreTOSearch = (low <= high);
    while(moreTOSearch && !found)
    {
        if(info[mid] == item)
        {
            found = true;
            return info[mid];
        }
        else if(item > info[mid])
            low = mid+1;
        else
            high = mid-1;

        moreTOSearch = (low <= high);
        mid = (low+high)/2;
    }
    return item;
}


