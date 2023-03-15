#include<iostream>
using namespace std;
int ar[100];
template<class T>
T sum (T n, T s)
{
    for (int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
   for (int i=0; i<n; i++)
    {
        s+=ar[i];
    }
    cout<<s<<endl;
}

int main ()
{
    int n;
    cin>>n;
    int s=0;
    sum(n,s);
    return 0;
}
