#include<iostream>
using namespace std ;

class person

{
public:
    string name;
    int age;

    void display1()

    {

        cout<<"1st person /n";
        cout<<"Name : " << name <<endl;
        cout<<"age : " << age <<endl;
    }

    void display3()
    {
        cout<<"2nd  person /n";
        cout<<"Name : " << name <<endl;
        cout<<"age : " << age <<endl;
    }


};

class student : public person
{
  public:
      int id;
      void display2()
      {
           cout<<"1st person "<<endl;
        cout<<"id : " << id <<endl;
        cout<<"Name : " << name <<endl;
        cout<<"age : " << age <<endl;

      }

      void display4()
      {
          cout<<"2nd person "<<endl;
          cout<<"id : " << id <<endl;
        cout<<"Name : " << name <<endl;
        cout<<"age : " << age <<endl;
      }

};

int main ()

{
    student s1;
    s1.id = 101;
    s1.name = "Tanjim";
    s1.age= 27;

    s1.display2();

    s1.id = 102;
    s1.name = "Hasan";
    s1.age= 28;

    s1.display4();
return 0;

}
