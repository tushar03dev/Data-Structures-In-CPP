//
// Created by tushar on 9/8/24.
//
#include<iostream>
using namespace std;

int sum(int n){
    if(n == 1) return 1;
    int ans = n + sum(n-1);
    return ans;
}

int main(){
    int n = 10;
    cout<<n<<endl;
    cout<<n++<<endl;
    cout<<n;
    return 0;

}