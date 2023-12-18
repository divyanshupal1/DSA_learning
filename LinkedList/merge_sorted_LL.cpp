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

Node* MergeSorted(Node* List1,Node* List2){
    Node *toreturn,*prev,*l1,*l2;
    if(List1->data<List2->data){
        toreturn=List1;
        prev=List1;
        l1=List1->next;
        l2=List2;
    }
    else{
        toreturn=List2;
        prev=List2;
        l1=List2->next;
        l2=List1; 
    }
    
    while(l1->next!=NULL && l2->next!=NULL){
        if(l1>l2){
            prev->next=l2;
            l2=l2->next;            
        }
        else{
            prev->next=l1;
            l1=l1->next;
        }
        prev=prev->next;
    }
    return toreturn;
}

int main(){
    int l,d;
    cin>>l>>d;
    Node* head = new Node(d);
    driver(head,l-1);
    cin>>l>>d;
    Node* head2 = new Node(d);
    driver(head2,l-1);
    Print(head);
    cout<<endl;
    Print(head2);
    cout<<endl;
    Node* res = MergeSorted(head,head2);
    Print(res);
    return 0;
}