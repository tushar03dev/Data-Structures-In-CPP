//
// Created by tushar on 5/8/25.
//

#include <iostream>
#include <vector>

using namespace std;


int solve(int capacity, int wt[], int profit[], int &n) {
    vector<int> next(capacity + 1, 0);
    // V.V.Tmp inter change loops
    // in second level of optimmization change loops of capacity from capacity to 0

    for (int j = n - 1; j >= 0; j--) {
        for (int i = capacity; i >= 0; i--) {

            int include = 0;
            if (wt[j] <= i) {
                include += profit[j] + next[i - wt[j]];
            }

            int exclude = next[i];

            next[i] = max(include, exclude);
        }
    }

    return next[capacity];
}

int main() {
    int capacity = 50;
    int wt[] = {10, 20, 30};
    int profit[] = {60, 100, 120};
    int n = 3;
    int ans = solve(capacity, wt, profit, n);
    cout << ans;
    return 0;
}