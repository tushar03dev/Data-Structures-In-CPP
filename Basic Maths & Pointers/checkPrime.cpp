//
// Created by tushar on 3/10/24.
//
#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(long long n) {
    if(n <= 1) return false;

    for (long long i = 2; i <=sqrt(n); ++i) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    bool result = checkPrime(n);
    cout << result;
    return 0;
}
