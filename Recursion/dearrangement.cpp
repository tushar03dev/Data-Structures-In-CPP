//
// Created by tushar on 18/12/24.
//
#include <iostream>
using namespace std;

int solve(int n){
    // base case
    if(n == 1) return 0;
    if(n == 2) return 1;

    // recursive relation
    int ans = (n-1)*(solve(n-1)+solve(n-2));
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}