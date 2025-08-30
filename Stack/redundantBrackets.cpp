//
// Created by tushar on 31/8/25.
//

#include <iostream>
#include <stack>

using namespace std;

bool checkRedundant(string& str){
    stack<char> st;
    for(char ch : str){
        if( ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '%' || ch == '*') st.push(ch);
        if(ch == ')') {
            int operatorCount = 0;

            while(!st.empty() && st.top() != '('){
                char temp = st.top();
                if(temp== '+' || temp == '-' || temp == '/' || temp == '%' || temp == '*') operatorCount++;
                st.pop();
            }

            st.pop();

            if(operatorCount == 0) return true;
        }
    }

    return false;
}

int main(){
    string str = "((a+b)*(c+d))";
    bool ans = checkRedundant(str);

    if(ans == 1){
        cout<<"Redundant";
    } else{
        cout<<"Not redundant";
    }

    return 0;
}