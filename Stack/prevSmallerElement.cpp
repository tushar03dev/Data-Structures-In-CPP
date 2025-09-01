//
// Created by tushar on 312/8/25.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> prevSmaller(vector<int>& arr){
    stack<int> st;
    vector<int> ans(arr.size(),-1);
    st.push(-1);

    for(int i = 0; i < arr.size(); i++){
        while(st.top() >= arr[i]){
            st.pop();
        }

        ans[i] = st.top();
        st.push(arr[i]);

    }

    return ans;
}

void print(vector<int>& ans){
    for(int x : ans){
        cout<<x<<" ";
    }
}

int main(){
    vector<int> arr = { 8, 4, 6, 2, 3};

    vector<int> ans = prevSmaller(arr);
    print(ans);

    return 0;
}