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
    ~Node(){
        cout<<"des"<<endl;
    }
};
void Insert(Node* head,int d){
    if(head->next==NULL) head->next = new Node(d);
    else Insert(head->next,d);
}
void driver(Node* head){
    int size,temp;
    cin>>size;
    while (size>0)
    {
        cin>>temp;
        Insert(head,temp);
        size--;
    }
}

void Print(Node* head){
    cout<<head->data;
    if(head->next!=NULL) Print(head->next);    
}

int main(){
    Node* head = new Node(0);
    driver(head);
    Print(head);
    return 0;
}