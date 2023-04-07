#include<iostream>
using namespace std;

int DecToBin(int n){
if (n==0){
    return 0;
   }
   else{
    return n % 2 + 10 * DecToBin( n / 2 );
   }
}
int main()
{
    int n;

    cout<<"Enter the Decimal Value : ";
    cin>>n;
    int masum = DecToBin(n);
    cout<<"Binary of "<<n<<" = "<<masum<<endl;
return 0;
}
