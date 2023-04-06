#include<iostream>
using namespace std;

int factorial(int n){
if (n>1){
    return n * factorial(n - 1);
    }
    else{
    return 1;
    }
}

int main()
{
    int n;
    cout<<"Enter the positive number : ";
    cin>>n;
    int masum = factorial(n);
    cout << "Factorial of " << n << " = " << masum << endl;
return 0;
}


