#include <iostream>
#include "SortedType.cpp"

using namespace std;

int main()
{
    SortedType <int> Mylist;
    if(Mylist.is_full())
        cout<<"Yes"<<endl;
    cout<<Mylist.get_length()<<endl;
    Mylist.make_empty();
    if(Mylist.is_emptyy())
        cout<<"Yes"<<endl;

    return 0;
}
