#include<iostream>
#define MAX 100
using namespace std;


class Stack { 
    int top; 
    int a[MAX];
  public:
    Stack() { top = -1; } 
    void push(int x); 
    int pop(); 
    bool isEmpty(); 
}; 
void Stack::push(int x) 
{ 
    if (top >= (MAX - 1)) { 
        cout << "Stack Overflow"; 
        
    } 
    else { 
        a[++top] = x; 
        cout << x << " pushed into stack\n"; 
         
    } 
} 
int Stack::pop() 
{ 
    if (isEmpty()) { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else { 
        int x = a[top--]; 
        return x; 
    } 
} 
bool Stack::isEmpty() 
{ 
    return (top < 0); 
}