#include<iostream>
using namespace std;

class M
{
private:
    int id = 383;
    string name = "Masum";
public:
    friend class T;
};

class T
{
public:
    void display(M ob)
    {
        cout << "ID :"<<ob.id<<endl;
        cout<<"NAME :" <<ob.name<<endl;
    }
};
int main ()
{
    M ob1;
    T ob2;
    ob2.display(ob1);
}
