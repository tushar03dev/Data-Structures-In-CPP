//
// Created by tushar on 21/8/24.
//
#include<iostream>
#include <vector>

using namespace std;

int solve(vector<int>& dp, int n){
    if(n == 0 || n == 1) return n;

    if(dp[n] != -1) return dp[n];

    dp[n] = solve(dp,n-1) + solve(dp,n-2);
    return dp[n];
}

int main(){
    int n;
    cin>>n;

    vector<int> dp(n+1,-1);
    int ans = solve(dp,n);
    cout<<ans;

    return 0;
}