//
// Created by tushar on 30/8/25.
//
#include <iostream>
#include <stack>

using namespace std;

void insert(stack<int>& st, int& data){
    if(st.empty()){
        st.push(data);
        return;
    };

    int temp = st.top();
    if(temp <= data){
        st.push(data);
        return;
    }

    st.pop();

    insert(st,data);

    st.push(temp);

}

void sortStack(stack<int>& st){
    if(st.empty()) return;

    int temp = st.top();
    st.pop();
    sortStack(st);
    insert(st,temp);
}

void print(stack<int> st){
    cout<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(40);
    st.push(20);
    st.push(60);
    st.push(30);
    st.push(50);

    print(st);
    sortStack(st);

    print(st);

    return 0;
}