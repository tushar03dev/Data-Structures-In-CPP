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
    int top1;
    int top2;
public:

    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data){
        if(top2- top1 == 1){
            cout<<"Stack Overflow";
            return;
        }
        top1++;
        arr[top1] = data;
    }

    void push2(int data){
        if(top2- top1 == 1){
            cout<<"Stack Overflow";
            return;
        }
        top2--;
        arr[top2] = data;
    }

    void pop1(){
        if(top1 == -1) {
            cout<<"Stack Underflow";
            return;
        }
        top1--;
    }

    void pop2(){
        if(top2 == size) {
            cout<<"Stack Underflow";
            return;
        }
        top2++;
    }

    int getTop1(){
        if(top1 == -1){
            cout<<"Stack Empty"<<" ";
            return 0;
        }
        return arr[top1];
    }

    int getTop2(){
        if(top2 == -1){
            cout<<"Stack Empty"<<" ";
            return 0;
        }
        return arr[top2];
    }

    int getSize1(){
        return top1+1;
    }

    int getSize2(){
        return size - top2;
    }

    bool isEmpty1(){
        return top1 == -1;
    }

    bool isEmpty2(){
        return top2 == size;
    }

    void print(){
        cout<<endl;
        cout<<"Top1 :"<< top1 <<endl;
        cout<<"Top2 :"<< top2 <<endl;
        cout<<"Top Element1 :"<< getTop1()<<endl;
        cout<<"Top Element2 :"<< getTop2()<<endl;
        cout<<"Stack: "<<endl;
        for (int i = 0; i < size; ++i) {
            cout<< arr[i] << " ";
        } cout<<endl;
    }


};

int main(){
    Stack st(10);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);

    st.push1(100);
    st.push1(200);
    st.push1(300);
    st.push1(400);
    st.push1(500);
    st.push1(600);

    st.print();

    st.push1(700);
    st.push2(700);



    return 0;
}