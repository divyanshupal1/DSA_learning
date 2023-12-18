#include<bits/stdc++.h>
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
void Insert(Node* head,int d){
    if(head->next==NULL) head->next = new Node(d);
    else Insert(head->next,d);
}
void driver(Node* head,int l){
    int temp;
    while (l>0)
    {
        cin>>temp;
        Insert(head,temp);
        l--;
    }
}
void Print(Node* head){
    cout<<head->data;
    if(head->next!=NULL) Print(head->next);    
}

void deleteFromEnd(Node* &head,int curr,int &total,int n){
    if(head->next==NULL && total!=0) return;
    if(head->next==NULL && total==0){
        head=NULL;
        return;
    }
    total++;
    deleteFromEnd(head->next,curr+1,total,n);
    if(curr==(total-n)){
        Node* temp = head->next;
        head->next = temp->next;
        temp->next=NULL;
        delete temp;
    }
};

int main(){
    int l,d;
    cin>>l>>d;
    Node* head = new Node(d);
    driver(head,l-1);
    int n,total = 0;
    cin>>n;
    deleteFromEnd(head,0,total,n);
    Print(head);
    return 0;
}