#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    while(1)
    {
        try
    {
    int num1, num2;

    cout<<"Enter Frist Number :";
    cin >> num1;

    cout<<"Enter Second Number :";
    cin >> num2;

    if (num2==0)
        {
        throw -1;
        }

    double result = (double) num1/num2;
    cout << "Result : " <<result<< endl;
    }
    catch (int x)
    {
        cout << "Devided by Zero is not possible."<<endl;
        cout << "Please try Again."<<endl;

    }
    }

}
