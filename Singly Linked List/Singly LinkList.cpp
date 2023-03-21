#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};
Node*head=NULL;

void inserAtHead(int value){
    Node *new_node= new Node;
    new_node->data=value;
    new_node->next=head;
    head=new_node;
}

void insertAtTail(int value){
    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;

    Node *temp = head;
    if(temp == NULL){
        head = new_node;
    }else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void print()
{
    Node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main()
{
    inserAtHead(5);
    inserAtHead(8);
    inserAtHead(3);
    print();
}
