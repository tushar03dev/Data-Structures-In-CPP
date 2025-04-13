//
// Created by tushar on 9/4/25.
//
#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;
public:
    Node() {
        cout<<"Default Constructor"<<endl;
        this->next = NULL;
    }

    Node(int data){
        cout<<"Param Constructor"<<endl;
        this->data=data;
        this->next= nullptr;
    }
};

int main(){
    Node* first = new Node(10);

    return 0;
}