//
// Created by tushar on 1/9/25.
//
#include <iostream>
#include <vector>
using namespace std;

class Cqueue{
public:
    int* arr;
    int front;
    int rear;
    int size;

    Cqueue(int size){
        arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }

    void push(int data){
        if(front == 0 && rear == size-1 || rear == front - 1){
            cout<<endl;
            cout<<"Queue Overflow"<<endl;
        } else if( front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = data;
        } else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<endl;
            cout<<"Queue Underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        } else{
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
        for (int i = 0; i < size; ++i) {
            cout<< arr[i] << " ";
        } cout<<endl;
    }
};

int main(){
    Cqueue q(5);
    q.print();

    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();

    q.push(60);

    q.pop();
    q.pop();
    q.pop();

    q.print();

    q.push(100);
    q.print();

    q.push(110);
    q.print();

    q.push(120);
    q.print();

    q.push(130);

    q.pop();
    q.pop();
    q.print();
    q.pop();

    q.print();

    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();

    q.push(40);
    q.print();


    return 0;
}