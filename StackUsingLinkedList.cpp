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