#include<iostream>
using namespace std ;
class Node{
public:
    int data;
    Node *next;
};

Node *head = NULL;

void inserAtHead (int value){
     Node *new_node = new Node;
     new_node->data = value;
     new_node->next = head;
     head = new_node;
}

void inserAtTail(int value){
     Node *new_node = new Node;
     new_node->data = value;
     new_node->next = NULL;

     Node *temp = head;

     if (temp == NULL){
        head = new_node;
     }
     else {
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
     }
}
void deleteFromHead(){
     if (head != NULL){
        Node *toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
     }
     else{
        cout<<"Underflow/List is Empty"<<endl;
     }
}

void print(){
     Node *temp = head ;
     while(temp != NULL){
        cout<< temp->data<<",";
        temp = temp->next;
     }
     cout<<endl;
}

int main ()
{
    inserAtTail(5);
    inserAtTail(8);
    inserAtTail(3);

    print();

    deleteFromHead();
    print();
    deleteFromHead();
    print();
    deleteFromHead();
    print();

    deleteFromHead();

return 0;
}
