#include<iostream>
using namespace std;

class M
{
private:
    float real;
    float imag;
public:
    M() : real(0), imag (0){}
    void input ()
    {
        cout << "Enter real and imaginary parts respectively :";
        cin >> real;
        cin >> imag;
    }
    M operator + (const M& obj)
    {
        M temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
return temp;
    }
    void output()
    {
        if (imag < 0)
            cout << "Output complex number: " << real << imag << "i";
        else
            cout << "Output complex number: " << real << "+" << imag << "i";
    }
};
int main ()
{
    M m1,m2, result;
    cout << "Enter Frist number :\n";
    m1.input();
    cout << "Enter Second nummber :\n";
    m2.input();
    result = m1 + m2 ;
    result.output();
}
