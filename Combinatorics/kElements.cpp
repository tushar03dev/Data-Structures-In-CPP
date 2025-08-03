//
// Created by tushar on 3/8/25.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 5, k = 3;
    vector<int> arr = {10, 20, 30, 40, 50};

    // Create a bitmask with k 1's and n-k 0's
    vector<bool> bitmask(k, 1);  // k ones
    bitmask.resize(n, 0);             // n-k zeros

    do {
        vector<int> selected_indices;
        for (int i = 0; i < n; ++i) {
            if (bitmask[i]) {
                selected_indices.push_back(i);
            }
        }

        // Print selected indices and their values
        for (int idx : selected_indices) {
            std::cout << "(" << idx << " -> " << arr[idx] << ") ";
        }
        std::cout << "\n";

    } while (std::prev_permutation(bitmask.begin(), bitmask.end()));

    return 0;
}