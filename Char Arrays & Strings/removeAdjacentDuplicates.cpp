//
// Created by tushar on 20/7/24.
//
#include <iostream>
#include<cstring>
using namespace std;

void removeAdjacentString(string &str){
    string ans = "";
    int index=0;
    while(!str.empty() && index < str.length()){
        if(str[index] == ans.back()){
            ans.pop_back();
        }
        else{
            ans.push_back(str[index]);
        }
        index++;
    }
    str = ans;
}

int main(){
    string str ="azxxzy";
    removeAdjacentString(str);
    cout<<str;
    return 0;
}