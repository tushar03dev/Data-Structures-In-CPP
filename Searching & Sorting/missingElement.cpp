//
// Created by tushar on 10/7/24.
//
#include<iostream>
using namespace std;

int missingElement(int arr[],int n) {
    int start = 0;
    int end = n-1;
    int ans = 0;
    while (start <=end) {
        int mid = start + (end-start)/2;
        int diff = arr[mid] -mid;
        if(diff == 1) {
            ans = arr[mid];
            //pattern break can be found only in the right
            start = mid+1;
        }
        else {
            ans = arr[mid];
            // might or might not be the first pattern break , go left
            end = mid -1;
        }

    }
    return ans-1;
}

int main() {
    int arr[] = {1,2,3,4,6,7,8,9};
    int n = 8;
    int number = missingElement(arr,n);
    cout<<"Missing number: "<<number;
    return 0;
}
