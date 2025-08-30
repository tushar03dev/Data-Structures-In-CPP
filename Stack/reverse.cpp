//
// Created by tushar on 30/8/25.
//

#include <iostream>
#include <stack>

using namespace std;

int main(){
    string str = "TUSHAR";
    stack<char> st;

    for(char ch : str){
        st.push(ch);
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}