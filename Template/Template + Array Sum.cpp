#include<iostream>
using namespace std ;
template <class T>
T sum (T a[], int length)
{
    T ret=a[0];
    for (int i=1; i<length; i++)
        ret+=a[i];
    return ret;
}
int main (void)
{
    int x[5];
    float y[5];
    int i=0;

    cout <<"Enter 5 integer number"<<endl;
    for (i; i<5; i++)
        cin>>x[i];
    cout<<"Sum of above data is :"<<sum(x,5)<<endl;

    cout <<"Enter 5 float number"<<endl;
    for (i; i<5; i++)
        cin>>y[i];
    cout<<"Sum of above data is :"<<sum(y,5)<<endl;
}
