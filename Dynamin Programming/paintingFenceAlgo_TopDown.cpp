//
// Created by tushar on 5/8/25.
//
#include <iostream>
#include <vector>

using namespace std;

int solve(int n, int k, vector<int> &dp){
    if(n == 1) return k;
    if(n == 2) return k + k*(k-1);

    if(dp[n] != -1) return dp[n];

    dp[n] = (k-1)*(solve(n-1,k,dp) + solve(n-2,k,dp));
    return dp[n];
}

int main(){
    int n = 3;
    int k = 3;
    vector<int> dp(n+1,-1);
    int ans = solve(n,k,dp);
    cout<<ans;
    return 0;
}