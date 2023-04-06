#include<iostream>
using namespace std;

class car
{
public:
    int frontSit;
    int backSit;
    int speed;

    void get_input()
    {
        cin>>frontSit;
        cin>>backSit;
        cin>>speed;
    }
    car operator+(car b)
    {
        car temp;
        temp.frontSit=frontSit+b.frontSit;
        temp.backSit=backSit+b.backSit;
        temp.speed=speed+b.speed;
        return temp;
    }
    void show ()
    {
        cout<<frontSit;
        cout<<backSit;
        cout<<speed;
    }

};
int main ()
{
    car a,b,c;
    a.get_input();
    b.get_input();
    c=a+b;
    c.show();
}
