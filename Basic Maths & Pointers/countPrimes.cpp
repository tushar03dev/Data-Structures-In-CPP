//
// Created by tushar on 3/10/24.
//
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int countPrimes(int n) {
    if(n == 0) return 0;

    vector<bool> prime(n,true);
    prime[0] = prime[1] = false;

    int count =0;
    for (int i = 2; i < n; ++i) {
        if(prime[i]) {
            count++;

            int j = 2 * i;
            while (j < n){
                prime[j] = false;
                j += i;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int count = countPrimes(n);
    cout << count;
    return 0;
}
