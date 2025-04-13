//
// Created by tushar on 15/8/24.
//
#include <iostream>
using namespace std;

int fact(int n){
    if(n == 1)
        return 1;
    int ans = n*fact(n-1);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}