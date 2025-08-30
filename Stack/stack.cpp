//
// Created by tushar on 30/8/25.
//

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout<<st.size()<<endl;

    st.pop();
    if(st.empty()) cout<<"empty"<<endl;
    else cout<<"not empty"<<endl;

    cout<<st.top();

    return 0;
}