//
// Created by tushar on 1/8/25.
//
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    // step1: create a dp array
    vector<int> dp(n+1,0);
    // step2: fill the base case
    dp[1] = 1;
    // step3 : fill the remaining array
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n];

    return 0;
}
