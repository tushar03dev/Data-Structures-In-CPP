//
// Created by tushar on 3/8/25.
//
#include<bits/stdc++.h>
using namespace std;

int main() {
        int n;
        int k;
        cin >> n >> k;
        vector<int> first(n);
        vector<int> second(n);
        for (int i = 0; i < n; i++) {
            cin >> first[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> second[i];
        }

        vector<pair<int, int>> firstCopy;
        vector<pair<int, int>> secondCopy;
        for (int i = 0; i < n; i++) {
            firstCopy.emplace_back(first[i], i);
        }
        for (int i = 0; i < n; i++) {
            secondCopy.emplace_back(second[i], i);
        }
        sort(firstCopy.begin(), firstCopy.end(),
             [](const pair<int, int> &a, const pair<int, int> &b) {
                 return a.first > b.first; // descending by first
             });

        sort(secondCopy.begin(), secondCopy.end(),
             [](const pair<int, int> &a, const pair<int, int> &b) {
                 return a.first > b.first; // descending by first
             });


        pair<int, int> sum1 = {0, 0}, sum2 = {0, 0};

        for (int i = 0; i < k; i++) {
            sum1.first += firstCopy[i].first;
            sum1.second += second[firstCopy[i].second];
            sum2.first += secondCopy[i].first;
            sum2.second += first[secondCopy[i].second];
        }

    cout<<max(min(sum1.first, sum1.second), min(sum2.first, sum2.second));


    return 0;
}
