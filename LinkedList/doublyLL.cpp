#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }
};

void InsertAtEnd(Node* &head,int d){
    Node* newNode = new Node(d);
    Node* temp = head;
    while(temp -> next != NULL){
        temp=temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}

void Print(Node* head){
    cout<<head -> data<<" ";
    if( head -> next == NULL ) return;
    Print(head->next);
}

int main(){
    Node* head = new Node(0);
    int size,temp;
    cin>>size;
    while (size>0)
    {
        cin>>temp;
        InsertAtEnd(head,temp);
        size--;
    }
    Print(head);  

    return 0;
}