#include <iostream>
using namespace std;
int Fibo(int n) {
   if((n==1)||(n==0)) {
      return(n);
   }else {
      return(Fibo(n-1)+Fibo(n-2));
   }
}
int main() {
   int n , m=0;
   cout<<"Enter the number of terms of series : ";
   cin>>n;
   cout<<"\nFibonnaci Series : ";
   while(m < n) {
      cout<<" " <<Fibo(m);
      m++;
   }
   return 0;
}
