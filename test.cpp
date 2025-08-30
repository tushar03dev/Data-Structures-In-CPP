#include <bits/stdc++.h>
using namespace std;

vector<int> getDistinctCharacters(int n, string data, vector<vector<int>>& queries) {
    vector<int> results;

    for (auto &query : queries) {
        if (query[0] == 1) {
            int i = query[1];   // position (1-based)
            int x = query[2];   // x-th letter of alphabet (1-based)

            // Convert x to the corresponding lowercase letter
            char newChar = 'a' + (x - 1);  // x=1 -> 'a', x=2 -> 'b', etc.

            // Update the character at position i
            data[i - 1] = newChar;

        } else if (query[0] == 2) {
            int l = query[1];
            int r = query[2];

            // Count distinct characters in range [l, r]
            set<char> distinctChars;

            for (int i = l-1; i <= r-1; i++) {
                distinctChars.insert(data[i]);
            }
         

            results.push_back(distinctChars.size());
        }
    }

    return results;
}

int main() {
    int n = 7;
    string data = "abccbda";
    vector<vector<int>> queries = {
            {2, 3, 6},
            {1, 2, 3},
            {2, 2, 4},
            {1, 1, 5},
            {2, 1, 7}
    };

    vector<int> ans = getDistinctCharacters(n, data, queries);

    for (int x : ans) cout << x << "\n";
    return 0;
}
