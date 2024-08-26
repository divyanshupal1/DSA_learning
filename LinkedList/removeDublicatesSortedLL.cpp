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
};

class LinkedList
{
public:
    Node *head = NULL;

    void InsertAtEnd(int d)
    {
        Node *newNode = new Node(d);
        if (this->head == NULL)
            this->head = newNode;
        else
        {
            Node *temp = this->head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    void print()
    {
        Node *temp = this->head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void reverse()
    {
        Node *curr = head;
        Node *prev = NULL;
        Node *next = curr->next;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

void driver(LinkedList *l1)
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int temp;
        cin >> temp;
        l1->InsertAtEnd(temp);
        n--;
    }
}

void removeDuplicates(LinkedList* &LL){
    Node* head = LL->head;
    if(head==NULL){
        return;
    }
    Node* temp = head;
    Node* curr = head->next;

    while(curr!=NULL){
        if(curr->data == temp->data){
            curr = curr->next;
        }
        else{
            temp->next = curr;
            temp = temp->next;
        }
    }
}

int main()
{

    LinkedList *l1 = new LinkedList();
    driver(l1);
    removeDuplicates(l1);
    l1->print();
    return 0;
}