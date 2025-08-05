//
// Created by tushar on 5/8/25.
//
#include <iostream>
#include <vector>

using namespace std;

int solve(int n, int k){
    int prev2 =k;
    int prev1 = k + k*(k-1);
    if(n == 1) return prev2;
    if(n==2) return prev1;

    for (int i = 3; i <= n; ++i) {
        int curr = (k - 1) * (prev1 + prev2);
        prev2 = prev1;
        prev1 = curr;

    }
    return prev1;
}

int main(){
    int n = 2;
    int k = 3;
    int ans = solve(n,k);
    cout<<ans;
    return 0;
}