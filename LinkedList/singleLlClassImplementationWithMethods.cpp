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

class LinkedList
{
   public:
   Node* head =NULL;
      
   void InsertAtEnd(int d){
        Node* newNode = new Node(d);
        if(this->head==NULL) this->head=newNode;
        else{
            Node* temp = this->head;
            while(temp->next!=NULL) temp=temp->next;
            temp->next=newNode;
        }
   }
   
   void print(){
    Node* temp = this->head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   }

   void reverse(){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = curr->next;
    while(curr!=NULL){       
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;        
    }
    head=prev;
   }
};

class ExtendedLL:public LinkedList{
    public:
    int findMid(){
        Node* forward=this->head;
        Node* back = this->head;
        int i=0;
        while(forward->next!=NULL){            
            forward=forward->next;
            if(i%2==0) back=back->next;
            i++;
        }
        return back->data;
    }
};

void driver(ExtendedLL* l1){
    int n;
    cin>>n;
    while(n>0){
        int temp;
        cin>>temp;
        l1->InsertAtEnd(temp);
        n--;
    }
}

int main(){

    ExtendedLL* l1 = new ExtendedLL();
    driver(l1);
    l1->print();
    cout<<endl;
    int mid = l1->findMid();
    cout<<"mid : "<<mid;

    return 0;
}