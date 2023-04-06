#include<iostream>
using namespace std;
class base {
public:
    virtual void display()=0;
};

class driven:public base{
public:
    void display (){
    cout<<"From Driven Class"<<endl;
    }
};

int main()
{
    base b_obj;
    derive d_obj;
    base *bptr;

    b_obj.display();
    b_obj.display();

    bptr=&d_obj;
    bptr->display();
    return 0;
}
