//
// Created by tushar on 1/9/25.
//
#include <iostream>
#include <vector>
using namespace std;

class Queue{
public:
    int* arr;

    int front;
    int rear;
    int size;

    Queue(int size){
        arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }

    void push(int data){
        if(rear == size-1){
            cout<<"Queue Overflow";
        } else if( front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = data;
        } else{
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<"Queue Underflow";
        }
        else if(front == 1 && rear == 1){
            arr[rear] = -1;
        }
        else {
            arr[front] = -1;
            front++;
        }
    }

    bool isEmpty(){
        if(front == -1 && rear == -1) return true;
        return false;
    }

    int getSize(){
        if(rear == -1 && front == -1) return 0;
        return rear - front + 1;
    }

    int getFront(){
        if(front == -1){
            cout<<"No Element in Queue"<<endl;
            return -1;
        }

        return arr[front];
    }

    int getBack(){
        if(rear == -1){
            cout<<"No Element in Queue"<<endl;
            return -1;
        }

        return arr[rear];
    }

    void print(){
        cout<<endl;
        cout<<"Front :"<< front <<endl;
        cout<<"Back :"<< rear<<endl;
        cout<<"Queue: "<<endl;
        for (int i = 0; i < getSize(); ++i) {
            cout<< arr[i] << " ";
        } cout<<endl;
    }
};

int main(){
    Queue q(6);
    q.print();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.print();

    q.push(70);
    return 0;
}