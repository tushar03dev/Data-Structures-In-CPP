//
// Created by tushar on 3/8/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n = 5, k = 3;
    vector<int> arr1 = {6,3,6,5,1};
    vector<int> arr2 = {1,4,5,9,2};


    // Create a bitmask with k 1's and n-k 0's
    std::vector<bool> bitmask(k, 1);  // k ones
    bitmask.resize(n, 0);             // n-k zeros
    int maxi = INT_MIN;

    do {
        std::vector<int> selected_indices;
        for (int i = 0; i < n; ++i) {
            if (bitmask[i]) {
                selected_indices.push_back(i);
            }
        }

        int sum1=0;
        int sum2=0;

        for (int idx : selected_indices) {
            sum1 += arr1[idx];
            sum2 += arr2[idx];
        }
        maxi = max(maxi,min(sum1,sum2));

    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));

    cout<<maxi;

    return 0;
}