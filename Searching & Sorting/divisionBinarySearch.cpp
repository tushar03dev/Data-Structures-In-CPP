//
// Created by tushar on 17/7/24.
//
#include <iostream>
#include <stdexcept>
using  namespace std;

int getQuotient(int divisor,int dividend) {
    int start =0;
    int end = dividend;
    int ans = -1;
    if(dividend == 0) {
        return 0;
    }
    if(divisor == 0) {
        throw invalid_argument("Divisor can't be zero.");
    }
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(mid * divisor == dividend) {
            return mid;
        }
        else if(mid * divisor < dividend) {
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main() {
    try {
        int dividend = -29;
        int divisor = 4;
        int ans = getQuotient(abs(divisor),abs(dividend));
        if((dividend < 0 && divisor > 0) ||(dividend > 0 && divisor < 0)){
            ans = ans*(-1);
        }
        cout<<ans;
    }catch (const invalid_argument& e) {
        cout<<"Error: "<<e.what()<<endl;
    }
    return 0;
}