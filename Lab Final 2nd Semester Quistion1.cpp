#include<iostream>
using namespace std;
template <class T>
T lowest (T a, T b)
{
    if (a>b)
        return a;

}
int main ()
{
    int a,b,lowest;
    cout << "Enter First  Number : "<<endl;
    cin>>a;
    cout <<"Enter Second Number : "<<endl;
    cin>>b;

    if (a>b)
    {
        lowest=b;
        if (lowest>=7)
            {
            cout<<"Increasing heat"<<endl;
            }
        else if (lowest>=5&&lowest<7)
            {
            cout<<"Wait of 5 minutes then increase heat"<<endl;
            }
        else if (lowest>=2&&lowest<5)
            {
            cout<<"Wait of 10 minutes then increase heat"<<endl;
            }
        else if (lowest<2)
            {
            cout << "Discard substace"<<endl;
            }

    }
    else if (b>a)
    {
        lowest=a;
         if (lowest>=7)
            {
            cout<<"Increasing heat"<<endl;
            }
        else if (lowest>=5&&lowest<7)
            {
            cout<<"Wait of 5 minutes then increase heat"<<endl;
            }
        else if (lowest>=2&&lowest<5)
            {
            cout<<"Wait of 10 minutes then increase heat"<<endl;
            }
        else if (lowest<2)
            {
            cout << "Discard substace"<<endl;
            }
    }
return 0;
}
