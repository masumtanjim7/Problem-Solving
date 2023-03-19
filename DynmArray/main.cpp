#include <iostream>

using namespace std;

int main()
{
 int *ptr;
 ptr = new int [5];
 for (int i =0;i<5;i++)
 {
     *(ptr+i)=i+10;
 }
 for (int i=0;i<5;i++)
 {
     cout<< ptr[i] <<endl;
 }


  float *ptr1;
 ptr1 = new float [5];
 for (float i =0.0;i<5;i++)
 {
     *(ptr1+i)=i+.5;
 }
 for (float i=0;i<5;i++)
 {
     cout<< ptr1[i] <<endl;
 }
 delete [] ptr;


 return 0;
}

