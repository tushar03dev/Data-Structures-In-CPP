//
// Created by tushar on 30/8/25.
//

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Stack{
    int* arr;
    int size;
    int top;
public:

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data){
        if(top == size-1){
            cout<<"Stack Overflow";
            return;
        }
        top++;
        arr[top] = data;
    }

    void pop(){
        if(top == -1) {
            cout<<"Stack Underflow";
            return;
        }
        top--;
    }

    int getTop(){
        if(top == -1){
            cout<<"Stack Empty"<<" ";
            return 0;
        }
        return arr[top];
    }

    int getSize(){
        return top+1;
    }

    bool isEmpty(){
        return top == -1;
    }

    void print(){
        cout<<endl;
        cout<<"Top :"<< top <<endl;
        cout<<"Top Element :"<< getTop()<<endl;
        cout<<"Stack: "<<endl;
        for (int i = 0; i < getSize(); ++i) {
            cout<< arr[i] << " ";
        } cout<<endl;
    }


};

int main(){
    Stack st(8);

    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.push(30);
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    st.pop();
    st.print();

    cout<<(st.isEmpty());

    return 0;
}