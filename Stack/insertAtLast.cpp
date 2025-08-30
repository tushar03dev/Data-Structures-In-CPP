//
// Created by tushar on 30/8/25.
//
#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int>& st, int& data){
    if(st.empty()){
        st.push(data);
        return;
    }

    int temp = st.top();

    st.pop();

    solve(st,data);

    st.push(temp);

}

void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int data = 70;
    solve(st, data);

    print(st);

    return 0;
}