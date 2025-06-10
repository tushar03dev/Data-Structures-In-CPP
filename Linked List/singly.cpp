//
// Created by tushar on 9/4/25.
//
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

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

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp){
        len++;
        temp = temp->next;
    }

    return len;
}

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    if(head) temp->next = head;
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    Node *temp = new Node(data);
    if(head) {
        tail->next = temp;
        tail = temp;
    } else{
        head = temp;
        tail = temp;
    }
}

void createTail(Node* &head, Node* &tail){
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    tail = temp;
}

void insertAtRandom(Node* &head, Node* tail, int data, int pos){
    if(pos < 1){
        cout<<"Cant insert"<<endl;
        return;
    }
    int length = getLength(head);
    if(pos > length + 1){
        cout<<"Cant insert"<<endl;
        return;
    }

    if(pos == 1){
        insertAtHead(head,data);
    } else if(pos == length + 1){
        insertAtTail(head,tail, data);
    } else{
        Node* temp = new Node(data);
        pos = pos-2;
        Node* prev = head;
        while(pos--){
            prev = prev->next;
        }
        temp->next = prev->next;
        prev->next = temp;
    }
}

void deleteNode(Node* &head, Node* &tail, int pos){
    if(head == nullptr){
        cout<<"LL is empty";
        return;
    }
    else
}

int main(){

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;
    Node* tail = fifth;

    print(head);
    getLength(head);

    insertAtHead(head,500);
    print(head);
    insertAtTail(head, tail, 5000);

    insertAtRandom(head, tail, 15, 3);

    print(head);

    return 0;
}