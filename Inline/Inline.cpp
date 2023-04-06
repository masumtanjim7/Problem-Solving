#include<bits/stdc++.h>
using namespace std;
class testInline{
public:
    inline void test ();

};
inline void testInline::test(){
 cout<<"Inline Function"<<endl;
}
int main ()
{
    testInline obj;
    obj.test();
    return 0;
}
