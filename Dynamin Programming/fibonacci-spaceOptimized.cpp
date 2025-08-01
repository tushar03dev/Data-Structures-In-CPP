//
// Created by tushar on 1/8/25.
//
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int prev  = 0;
    int curr = 1;
    int ans;
    for(int i = 2; i <= n;i++){
        ans = curr + prev;
        prev = curr;
        curr = ans;
    }
    if(n == 0 || n== 1) cout<<n;
    else cout<<ans;
    return 0;
}