//
// Created by tushar on 17/7/24.
//
#include <iostream>
using namespace std;

float squareRootFloat(int n){
    int start=0;
    int end = n;
    int ans = -1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        cout<<"\nmid: "<<mid;

        if(mid*mid == n) {
            cout<<" fisrt case";
            return mid;
        }
        else if(mid*mid < n){
            ans = mid;
            start = mid +1;
            cout<<" second case";

        }
        else {
            end = mid-1;
            cout<<" third case";
        }
    }
    int temp = ans;

}


int main(){
    int n;
    cin>>n;
    float result;
    result = squareRootFloat(n);
    cout<<"\nresult: "<<result;
    return 0;
}