//
// Created by tushar on 22/11/24.
//
#include <iostream>
#include<vector>
using  namespace  std;

vector<string> ans;

void findSubsequences(string str,string output,int index){
    if(index >= str.size()){
        ans.push_back(output);
        return;
    }

    char ch = str[index];
    // exclude
    findSubsequences(str,output,index+1);
    //include
    output.push_back(ch);
    findSubsequences(str,output,index+1);

}

int main(){
    string str = "abc";
    string output="";
    int index=0;
    findSubsequences(str,output,index);
    for(auto x : ans){
        cout<<"->"<<x<<" ";
    }
    return 0;
}