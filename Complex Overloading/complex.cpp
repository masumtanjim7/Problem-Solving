#include "complex.h"
#include<iostream>
using namespace std;

Complex::Complex(){
 real = 0;
 imaginary = 0;
}
Complex::Complex(double r, double i){
real = r;
imaginary = i;

}
void Complex::print(){
   cout<<"Real = "<<real<<endl;
   cout<<"Imaginary = "<<imaginary<<endl;
}
Complex Complex::operator+(Complex c){
Complex temp;
temp.real = (real+c.real);
temp.imaginary = (imaginary+c.imaginary);
return temp;
}

