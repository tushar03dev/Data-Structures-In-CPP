//
// Created by tushar on 15/8/24.
//
#include<iostream>
using namespace std;

int fibo(int n){
    if(n == 0) {
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}

int main() {
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}