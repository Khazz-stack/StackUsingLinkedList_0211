#include<iostream>
using namespace std;

//node class representating a singel node in the linked lis
class Node{
public:
    int data;
    Node *next;

    Node(){
        next = NULL;
    }
};        

//stack class
class stack{
private:
    Node *top; //pointer to the top node of the stack 
};