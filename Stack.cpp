#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;
    st.push(5);
    st.push(8);
    st.push(1);
    st.push(3);
    cout<<st.top()<<endl;
    st.pop();
    int value=st.top();
    cout<<value<<endl;
}
