//
// Created by tushar on 5/8/25.
//
#include <iostream>
#include <vector>

using namespace std;

int solve(int n, int k, vector<int> &dp){
    dp[1] =k;
    dp[2] = k + k*(k-1);

    for (int i = 3; i <= n; ++i) {
        dp[i] = (k - 1) * (dp[i - 1] + dp[i - 2]);
    }
    return dp[n];
}

int main(){
    int n = 3;
    int k = 2;
    vector<int> dp(n+1,-1);
    int ans = solve(n,k,dp);
    cout<<ans;
    return 0;
}