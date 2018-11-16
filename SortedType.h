#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
#include <iostream>

#define MAX_ITEMS 15

using namespace std;

template<class ItemType>

class SortedType
{

public:
    SortedType();
    ~SortedType();
    bool is_full();
    int get_length();
    void make_empty();
    bool is_emptyy();
    ItemType get_item(ItemType item, bool& found);
    bool put_item(ItemType item);
    bool delete_item(ItemType item);
    void reset_list();
    bool has_next_item();
    ItemType get_next_item();
    void print_item();

private:
    int length;
    ItemType info[MAX_ITEMS];
    int currentPos;

};


#endif // SORTEDTYPE_H_INCLUDED
