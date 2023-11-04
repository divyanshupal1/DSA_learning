#include<bits/stdc++.h>
using namespace std;
const int MAX_SIZE =1000;

class Stack {
    private:
    int arr[MAX_SIZE];
    int top;
    public:
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return (top == -1);
    }
    bool isFull() {
        return (top == MAX_SIZE - 1);
    }
    void push(int element) {
        if (!isFull()) {
            top++;
            arr[top] = element;
            cout << "Pushed element: " << element << " onto the stack.\n";
        } else {
            cout << "Stack is full. Cannot push element " << element << ".\n";
        }
    }
    void pop() {
        if (!isEmpty()) {
            int poppedElement = arr[top];
            top--;
            cout << "Popped element: " << poppedElement << " from the stack.\n";
        } else {
            cout << "Stack is empty. Cannot pop from an empty stack.\n";
        }
    }
    int topElement() {
        if (!isEmpty()) {
            return arr[top];
        } else {
            cout << "Stack is empty.\n";
            return -1; 
        }
    }
};

int main(){

    Stack s;
    s.push(5);
    s.push(6);
    s.push(7);

    cout<<s.topElement();
    

    return 0;
}
