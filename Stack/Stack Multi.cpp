#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <string> M;

    M.push("Masum");
    M.push("Hasan");
    M.push("Tanjim");

    while(!M.empty())
    {
        string X;
        X = M.top();
        cout<< X <<endl;
        M.pop();
    }
return 0;
}
