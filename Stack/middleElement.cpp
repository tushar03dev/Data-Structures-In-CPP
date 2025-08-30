//
// Created by tushar on 30/8/25.
//
#include <iostream>
#include <stack>

using namespace std;

int solve(stack<int>& st, int pos){
    if(pos == 1) return st.top();

    int temp = st.top();
    st.pop();
    pos--;
    int ans = solve(st,pos);
    st.push(temp);

    return ans;
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int pos;
    if(st.size() & 1) pos = st.size()/2 + 1;
    else pos = st.size()/2;

    int mid = solve(st,pos);

    cout<<mid;

    return 0;
}