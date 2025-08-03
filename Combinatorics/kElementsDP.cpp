//
// Created by tushar on 3/8/25.
//

#include <iostream>
#include <vector>
#include <unordered_set>

std::unordered_set<std::string> memo;

void generateCombinations(int n, int k, int start, std::vector<int>& comb) {
    if (comb.size() == k) {
        for (int idx : comb)
            std::cout << idx << " ";
        std::cout << "\n";
        return;
    }

    // Memo key for pruning (can be skipped if not needed)
    std::string key = std::to_string(start) + "-" + std::to_string(comb.size());
    if (memo.count(key)) return;
    memo.insert(key);

    for (int i = start; i < n; ++i) {
        comb.push_back(i);
        generateCombinations(n, k, i + 1, comb);
        comb.pop_back();
    }
}

int main() {
    int n = 5, k = 3;
    std::vector<int> combination;
    generateCombinations(n, k, 0, combination);
    return 0;
}