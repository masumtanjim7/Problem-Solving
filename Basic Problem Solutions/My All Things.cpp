#include<iostream>
using namespace std;
class bike {
public:
    string brand;
    string model;
    int year;
    bike(string x,string y, int z);
};
class laptop{
public:
    string brand;
    string model;
    int year;
    laptop(string m,string n, int o);
};
class phone{
public:
    string brand;
    string model;
    int year;
    phone(string a,string b, int c);
};

bike :: bike (string x,string y,int z)
{
    brand=x;
    model=y;
    year=z;
}
laptop :: laptop (string m,string n,int o)
{
    brand=m;
    model=n;
    year=o;
}
phone :: phone (string a,string b,int c)
{
    brand=a;
    model=b;
    year=c;
}
int main()
{
    bike bikeobj ("SUZUKI","GIXXER SF FI ABS",2020);
    laptop laptopobj ("MSI","MODERN 15",2022);
    phone phoneobj ("SAMSUNG","GALAXY A52s 5G",2021);
    cout<< laptopobj.brand <<" "<< laptopobj.model << " " << laptopobj.year << "\n";
    cout<< bikeobj.brand <<" "<< bikeobj.model << " " << bikeobj.year << "\n";
    cout<< phoneobj.brand <<" "<< phoneobj.model << " " << phoneobj.year << "\n";
}
