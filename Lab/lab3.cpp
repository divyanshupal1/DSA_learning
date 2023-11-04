#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }  
};

void insertNode(Node* &head,int d){
    Node* newNode = new Node(d);
    newNode->next=head->next;
    head->next=newNode;
    head=newNode;
}
void printNode(Node* head){
    Node* temp = head->next;
 
    // If linked list is not empty
    if (head != NULL) { 
        // Print nodes till we reach first node again
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head->next);
    }
}

int main(){

    Node* head = new Node(5);
    int listSize;
    cin>>listSize;
    int temp;
    while (listSize>0)
    {
        cin>>temp;
        insertNode(head,temp);
        listSize--;
    }
    
    printNode(head);

    return 0;
}