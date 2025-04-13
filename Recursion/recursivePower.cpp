//
// Created by tushar on 21/11/24.
//
#include <iostream>
using namespace std;

int power(int n){
    if(n == 0) return 1;
    int ans = 2 * power(n-1);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    cout<<power(n);
    return 0;
}