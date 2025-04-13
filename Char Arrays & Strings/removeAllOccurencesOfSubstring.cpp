//
// Created by tushar on 20/7/24.
//
#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurences(string str,const string& part){
    while (str.find(part) != string::npos){
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main(){
    string str ="daabcbaabcbc";
    string part="abc";
    string str2;
    str2 = removeAllOccurences(str,part);
    cout<<str2;
    return 0;
}