#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C,D,X1,X2,X;
     cout << "Enter value of A > B > C" << endl;

    cin >> A >> B >> C ;

    D = (B*B-4*A*C);

    if (D > 0)
    {
       X1 = (-B+sqrt(D)/2*A);
       X2 = (-B-sqrt(D)/2*A);

      cout<< "Value of X1: " << X1 <<"\nValue of X2: " << X2 <<endl;
    }
    else if (D = 0)
    {
        X = (-B/2*A);
        cout<<"UNIQUE SOLUTION OF X : "<<X<<endl;
    }
    else
    {
     cout<<"NO REAL SOLUTIONS"<<endl;
    }
return 0;
}

