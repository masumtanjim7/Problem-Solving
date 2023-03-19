#include <iostream>
#include"unsortedtype.cpp"

using namespace std;

int main()
{
    UnsortedType <int> list1;

    list1.InsertItem(5);
    list1.InsertItem(7);
    list1.InsertItem(6);
    list1.InsertItem(9);

    int value;
    for(int i=0;i<list1.LengthIs();i++)
    {
        list1.GetNextItem(value);
        cout<<value<<",";
    }
    cout<<endl;
    list1.ResetList();

    cout<<"Length Is : "<<list1.LengthIs()<<endl;
    list1.InsertItem(1);
    for(int i=0;i<list1.LengthIs();i++)
    {
        list1.GetNextItem(value);
        cout<<value<<",";
    }
    int find_value = 4;
    bool found;
    list1.RetrieveItem(find_value,found);
    if (found)
    {
        cout<<"\nItem is Found"<<endl;
    }
    else
    {
      cout<<"\nItem is not Found"<<endl;
    }

    find_value = 9;
    list1.RetrieveItem(find_value,found);
    if (found)
    {
        cout<<"\nItem is Found"<<endl;
    }
    else
    {
      cout<<"\nItem is not Found"<<endl;
    }
return 0;
}
