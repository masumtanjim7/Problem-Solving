#include<iostream>
using namespace std;

int BinToDec(int n)
{
    if(n==0){
        return 0;
    }
    else{
        return n % 10 + 2 * BinToDec(n / 10);
    }
}
int main()
{
    int n;
    cout<<"Enter the Binary Value : ";
    cin>>n;
    int masum = BinToDec(n);
    cout<<"Decimal of " <<n<< " = "<<masum;
return 0;
}
