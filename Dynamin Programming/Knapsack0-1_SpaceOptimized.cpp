//
// Created by tushar on 5/8/25.
//

#include <iostream>
#include <vector>

using namespace std;


int solve(int capacity, int wt[], int profit[], int &n) {
    vector<int> next(capacity + 1, 0);
    vector<int> curr(capacity + 1, -1);
    // V.V.Tmp inter change loops

    for (int j = n - 1; j >= 0; j--) {
        for (int i = 0; i <= capacity; ++i) {

            int include = 0;
            if (wt[j] <= i) {
                include += profit[j] + next[i - wt[j]];
            }

            int exclude = next[i];

            curr[i] = max(include, exclude);

            // shift
            next = curr;
        }
    }

    return curr[capacity];
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