//
// Created by tushar on 20/7/24.
//
#include <iostream>
using namespace std;

bool checkPalindrome(string s,int i,int j){
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool isValidPalindrome(string s){
    int start =0;
    int end = s.length()-1;
    while(start <= end){
        if(s[start] !=s[end]){
            bool ans1 = checkPalindrome(s,start+1,end);
            bool ans2 = checkPalindrome(s,start,end-1);
            return ans1 || ans2;
        }
        else {
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    string str="abcrrrca";
    bool ans = isValidPalindrome(str);
    cout<<ans;
    return 0;
}