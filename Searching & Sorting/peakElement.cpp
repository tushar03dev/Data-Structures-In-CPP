//
// Created by tushar on 10/7/24.
//
#include <iostream>
using namespace std;

int peakElement (int arr[],int n) {
    int start = 0;
    int end = n-1;

    while(start < end) {
        int mid = start +(end-start)/2;
        if(arr[mid] < arr[mid+1]){
            // A -> go right
            start = mid+1;
        }
        else{
            // B or Peak -> go left
            end = mid;
        }
    }
    return start;

}

int main() {
    int arr[] = {10,20,30,40,90,50,60,70,80};
    int n = 9;
    int index = peakElement(arr,n);
    cout<<"Peak found at "<<index;
    return 0;
}