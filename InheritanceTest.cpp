#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public:
    string name ;
    int age;

    void display1()
    {
        cout << "Name : "<<name<<endl;
        cout << "Age : "<<age<<endl;
    }

};
class Student : public Person
{
public:

    int id;
    string subject;
    void display2()
    {
        display1();
        cout << "Subject : "<<subject<<endl;
        cout << "ID : "<<id<<endl;


    }
};
int main()
{
   Student s1;

   s1.id = 383;
   s1.name = "Masum";
   s1.subject = "CSE";
   s1.age = 21;
   s1.display2();

   getch();
}
