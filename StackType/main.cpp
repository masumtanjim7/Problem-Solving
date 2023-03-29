#include <iostream>
#include "StackType.cpp"
#include <string>
#include <stack>
using namespace std;


bool IsOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
        return true;
    }else{
        return false;
    }
}


bool IsOperand(char ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return true;
    }else{
        return false;
    }
}


int Precedence(char ch){
    if(ch=='^')
        return 3;

    else if(ch=='*' || ch=='/')
        return 2;

    else if(ch=='+' || ch=='-')
        return 1;

    else
        return -1;
}


int main(){
    string infix, postfix;
    cout << "Enter infix expression (SINGLE DIGIT ONLY): ";
    cin >> infix;

    StackType<char> st;

    for(int i=0; i<infix.length(); i++){
        if(IsOperand(infix[i])){
            postfix += infix[i];
        }

        else if(infix[i] == '('){
            st.Push(infix[i]);
        }

        else if(infix[i] == ')'){
            while((st.Top()!='(') && !st.IsEmpty()){
                postfix += st.Top();
                st.Pop();
            }
            st.Pop();
        }

        else if(IsOperator(infix[i])){
            if(st.IsEmpty()){
                st.Push(infix[i]);
            }else{
                if(Precedence(infix[i]) > Precedence(st.Top())){
                    st.Push(infix[i]);
                }

                else if((Precedence(infix[i])==Precedence(st.Top())) && infix[i]=='^'){
                    st.Push(infix[i]);
                }

                else{
                    while(!st.IsEmpty() && (Precedence(infix[i])<=Precedence(st.Top()))){
                        postfix += st.Top();
                        st.Pop();
                    }
                    st.Push(infix[i]);
                }
            }
        }
    }

    while(!st.IsEmpty()){
        postfix += st.Top();
        st.Pop();
    }

    cout << "Postfix expression: " << postfix << endl;

    StackType<int> res;
    int x, y, z;
    for(int i=0; i<postfix.length(); i++){
        if(i<2 && IsOperator(postfix[i])){
            cout << "Wrong expression" << endl;
            return 0;
        }else{
            if(IsOperand(postfix[i])){
                z = (int)postfix[i] - 48;
                res.Push(z);
            }else if(IsOperator(postfix[i])){
                y = res.Top(); res.Pop();
                x = res.Top(); res.Pop();

                switch(postfix[i]){
                    case '+': res.Push(x + y); break;
                    case '-': res.Push(x - y); break;
                    case '*': res.Push(x * y); break;
                    case '/': res.Push(x / y); break;
                }
            }
        }
    }

    cout << "Postfix evaluated result: " << res.Top() << endl;

    return 0;
}
