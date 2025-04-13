//
// Created by tushar on 10/11/24.
//
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<bool> sieveEratosthenes(int n) {
    vector<bool> sieve(n+1,true);
    sieve[0]=sieve[1]=false;
    for (int i = 2; i*i <= n; ++i) {
        int j = i*i;
        while(j<=n){
            sieve[j] = false;
            j += i;
        }
    }
    return sieve;
}

vector<bool> segmentedSieve(int L, int R){
    vector<bool> sieve = sieveEratosthenes(sqrt(R));
    vector<int> basePrimes;

    for(int i = 0; i < sieve.size(); i++){
        if(sieve[i] > 0) basePrimes.push_back(i);
    }

    vector<bool> segSieve(R-L+1,true);
    if(L == 1 || L == 0) segSieve[L] = false;

    for(auto prime : basePrimes){
        int firstMul = (L/prime)*prime;
        if(firstMul < L) firstMul +=prime;

        int j = max(firstMul,prime*prime);
        while(j<=R){
            segSieve[j-L] =false;
            j += prime;
        }
    }

    return segSieve;
}

int main() {
    int L = 110;
    int R = 130;

    vector<bool> sieve = segmentedSieve(L,R);

    for(int i = 0; i < sieve.size(); i++){
        if(sieve[i]) cout<<i+L<<" ";
    }

    return 0;
}
