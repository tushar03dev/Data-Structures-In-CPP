//
// Created by tushar on 26/8/25.
//
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(){
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* createList(vector<int>& arr){
    Node* head = new Node();
    Node* temp = head;
    Node* prev = head;
    for (int x: arr) {
        if(temp != head) temp = temp->next;
        temp->data = x;
        if(prev != head) temp->next = prev;
        prev = temp;

    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8};
    Node* head = createList(arr);
    print(head);

    return 0;
}