#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *head = NULL;

void insertAtHead(int value){
Node *new_node = new Node;
new_node->data = value;
new_node->next = head;
head = new_node;
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

void insertAtNthPosition(int value, int pos){
    if(head == NULL && pos > 1){
        cout << "Previous Node is Missing" << endl;
        return;
    }

    Node *new_node = new Node;
    new_node->data = value;
    new_node->next = NULL;

    if(pos == 1){
        head = new_node;
    }else{
        Node *temp = head;
        for(int i=0; i<pos-2; i++){
            temp = temp->next;
        }
        Node *link = temp->next;
        temp->next = new_node;
        new_node->next = link;
    }
}

void deleteFromHead(){
    if(head != NULL){
        Node *toBeDeleted = head;
        head = head->next;
        delete toBeDeleted;
    }else{
        cout << "List is Empty" << endl;
    }
}

void deleteFromTail(){
    Node *current = head;
    Node *prev = head;
    while(current->next != NULL){
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    delete current;
}

void deleteByValue(int value){
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;

    while(current->data != value){
        prev = current;
        current = current->next;
    }
    next = current->next;

    if(prev == NULL){
        head = head->next;
        delete current;
    }else{
        prev->next = next;
        delete current;
    }
}

void reverseLinkedList(){
    Node *prev = NULL;
    Node *next = NULL;

    while(head != NULL){
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    head = prev;
}

void print(){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{

    insertAtHead(6);
    insertAtHead(7);
    insertAtHead(4);
    insertAtTail(5);
    insertAtTail(8);
    insertAtTail(3);

    print();

    deleteFromHead();
    print();
    deleteFromHead();
    print();
    deleteFromHead();
    print();
    deleteFromHead();
    print();
    deleteFromHead();
    print();
    deleteFromHead();
    print();

    deleteFromHead();

    reverseLinkedList();
    print();

    return 0;
}
