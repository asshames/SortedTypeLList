#include <iostream>
#include "SortedType.cpp"

using namespace std;

int main()
{
    SortedType <int> Mylist;
    if(Mylist.is_full())
        cout<<"Yes"<<endl;
    cout<<Mylist.get_length()<<endl;


    return 0;
}
