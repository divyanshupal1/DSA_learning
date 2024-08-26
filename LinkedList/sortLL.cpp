#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "des" << endl;
    }
};

void InsertAtEnd(Node* head,int d)
    {
        Node *newNode = new Node(d);
        if (head == NULL)
            head = newNode;
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
void print(Node* head)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
}


Node* sort(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* sorted = sort(head->next);
    // cout<<head->data<<",";
    Node* temp = sorted;   
    print(sorted);
    cout<<endl; 
    while(temp->next!=NULL && temp->next->data<head->data ) temp=temp->next;
    if(temp==sorted && temp->data>head->data){        
        head->next=sorted;
        sorted=head;        
    }
    else{
        head->next=temp->next;
        temp->next=head;
    }
    return sorted;
}

int main(){
    Node* head = new Node(4);
    InsertAtEnd(head,2);
    InsertAtEnd(head,1);
    InsertAtEnd(head,3);
    Node* sorted = sort(head);
    print(sorted);
    return 0;
}