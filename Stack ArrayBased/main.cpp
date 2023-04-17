#include <iostream>
#include "Stack ArrayBased.cpp"
using namespace std;


template <class T>
void CheckEmpty(StackType<T> &temp){
    if(temp.IsEmpty()){
        cout << "Stack is Empty" << endl;
    }else{
        cout << "Stack is not Empty" << endl;
    }
}


template <class T>
void CheckFull(StackType<T> &temp){
    if(temp.IsFull()){
        cout << "Stack is Full" << endl;
    }else{
        cout << "Stack is not Full" << endl;
    }
}

template <class T>
void PushItem(StackType<T> &temp, T item){
    if(temp.IsFull()){
        cout << "Stack overflow" << endl;
    }else{
        temp.Push(item);
    }
}


template <class T>
void PopItem(StackType<T> &temp){
    if(temp.IsEmpty()){
        cout << "Stack underflow" << endl;
    }else{
        temp.Pop();
    }
}


template <class T>
void Print(StackType<T> temp){
    StackType<T> temp2;

    while(!temp.IsEmpty()){
        temp2.Push(temp.Top());
        temp.Pop();
    }

    while(!temp2.IsEmpty()){
        cout << temp2.Top() << ", ";
        temp2.Pop();
    }

    cout << endl;
}


int main()
{
    StackType<int> st;

    CheckEmpty(st);

    PopItem(st); /// stack underflow

    PushItem(st, 5);
    PushItem(st, 7);
    PushItem(st, 4);
    PushItem(st, 2);

    CheckEmpty(st);

    PushItem(st, 3);

    Print(st);

    CheckFull(st);

    PushItem(st, 2); /// stack overflow

    PopItem(st);
    PopItem(st);

    cout << st.Top() << endl;

    return 0;
}
