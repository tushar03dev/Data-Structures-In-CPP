//
// Created by tushar on 20/7/24.
//
#include <iostream>
using namespace std;

int expand(string s,int i,int j){
    int count =0;
    while(i >=0 && j < s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int totalPalindromicSubstring(string s){
    int totalCount = 0;
    for (int i = 0; i < s.length(); ++i) {
        int oddCount = expand(s,i,i);
        int evenCount = expand(s,i,i+1);
        totalCount = totalCount + oddCount + evenCount;
    }
    return totalCount;
}

int main(){
    string s ="madam";
    int result;
    result = totalPalindromicSubstring(s);
    cout<<result;
    return 0;
}