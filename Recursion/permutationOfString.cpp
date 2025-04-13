//
// Created by tushar on 23/11/24.
//
#include <iostream>
using namespace std;

void permutation(string &str,int index){
    // base case
    if(index >= str.size()){
        cout<<str<<" ";
        return;
    }

    for (int j = index; j < str.length(); ++j) {
        swap(str[index],str[j]);
        // recursive call
        permutation(str,index+1);
        // backtracking
        swap(str[index],str[j]);
    }
}

int main() {
    string str = "abc";
    int i=0;
    permutation(str,i);
    return 0;
}