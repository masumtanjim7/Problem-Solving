#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int>st;
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        st.push(data);
    }
    int sum=0;
while(!st.empty()){
    sum=sum+st.top();
    cout<<sum<<endl;
    st.top();
}
    cout<<sum<<endl;
    return 0;
}
