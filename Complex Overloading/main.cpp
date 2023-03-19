#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex c1(10, -6), c2(20, -8),c3;


    c1.print();
    cout<<endl;
    c2.print();
    cout<<endl;
    c3=c1+c2;
    c3.print();
    cout<<endl;
    return 0;

}
