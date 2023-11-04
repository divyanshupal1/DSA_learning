#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void Insert(Node* &head,int d){
    Node* newNode = new Node(d);
    if(head->next==NULL){
        newNode->next=head;
    }
    else{
        newNode->next=head->next;
    }
    head->next = newNode;
    head = newNode;
}

void Print(Node* head){
    Node* temp = head->next;
    while (temp->next!=head->next)
    {
        cout<<temp->data;
        temp=temp->next;
    }    
}

int main(){
    Node* head = new Node(0);
    int size,temp;
    cin>>size;
    while (size>=0)
    {
        cin>>temp;
        Insert(head,temp);
        size--;
    }
    Print(head);

    

    return 0;
}