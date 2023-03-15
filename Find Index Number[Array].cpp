#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char P[80]={"bab"};
    char T[80]={"aabbbabb"};
    int R,S,K,L, MAX, INDEX;

    R = strlen(P);
    S = strlen(T);
    K = 0;
    MAX = S-R;

    while(K<=MAX)
    {
        for (L=0;L<R;L++)
        {
            if(P[L]!=T[K+L])
            {
                break;
            }
        }
    if (L==R)
    {
        INDEX=K;
        break;
    }
     else
      {
        K=K+1;
      }
    }
    if(K>MAX)
    {
        INDEX=-1;
    }
    cout << "P="<<P<<endl;
    cout<<"T="<<T<<endl;
    if(INDEX !=-1)
    {
        cout<<"\nIndex of P in T is "<< INDEX <<endl;
    }
    else
    {
        cout<<"\nP Does not exist in T"<<endl;
    }
return 0;
}
