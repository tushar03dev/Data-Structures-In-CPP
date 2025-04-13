//
// Created by tushar on 9/11/24.
//
#include <iostream>
using namespace std;

int fastExponentiation(int a, int b){
    int ans = 1;
    while(b > 0){
        if(b & 1)
            ans = ans*a;
        a = a*a;
        b>>=1;
    }
    return ans;
}

int main(){
    int a = 5;
    int b = 4;
    cout<<fastExponentiation(a,b);
}