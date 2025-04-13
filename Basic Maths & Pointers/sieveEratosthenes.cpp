//
// Created by tushar on 10/11/24.
//
#include<iostream>
#include<vector>
using namespace std;

vector<int> sieveEratosthenes(int n) {
  vector<int> sieve(n+1,true);
  sieve[0]=sieve[1]=false;
    for (int i = 2; i <=n; ++i) {
        int j = i*2;
        while(j<=n){
            sieve[j] = false;
            j += i;
        }
    }
    return sieve;
}

int main() {
    int n;
    cin >> n;
    vector<int> sieve = sieveEratosthenes(n);

    for(int i = 2; i <= n; i++){
        if(sieve[i] != 0) cout<<i<<" ";
    }
    
    return 0;
}
