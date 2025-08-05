//
// Created by tushar on 5/8/25.
//

#include <iostream>
#include <vector>
using namespace std;

int solve(int capacity, int wt[], int profit[], int &n){
    vector<vector<int>> dp(capacity+1,vector<int>(n+1,-1));

    for (int i = 0; i <= capacity; ++i) {
        dp[i][n] = 0;
    }

    for (int i = 0; i <= capacity; ++i) {
        for (int j = n-1; j >= 0; j--) {
            int include = 0;
            if(wt[j] <= i){
                include += profit[j] + dp[i-wt[j]][j+1];
            }

            int exclude = dp[i][j+1];

            dp[i][j] = max(include, exclude);
        }
    }

    return dp[capacity][0];
}

int main(){
    int capacity = 50;
    int wt[] = {10,20,30};
    int profit[] = {60,100,120};
    int n = 3;
    int ans = solve(capacity,wt,profit,n);
    cout<<ans;
    return 0;
}