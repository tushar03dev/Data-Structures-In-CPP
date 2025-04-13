//
// Created by tushar on 17/7/24.
//
#include <iostream>
using namespace std;

int search( int arr[],int n,int target) {
    int start = 0;
    int end = n-1;
    while(start <= end) {
        int mid = start + (end-start)/2;
        if(mid-1 >= 0 && arr[mid-1] == target) {
            return mid-1;
        }
        else if(arr[mid] == target) {
            return mid;
        }
        else if(mid+1 < n && arr[mid+1] == target) {
            return mid+1;
        }
        else if(target > arr[mid]){
            start = mid+2;
        }
        else {
            end = mid-2;
        }
    }
    return -1;
}

int main() {
    int arr[]={20,10,30,50,40,70,60};
    int n = 7;
    int target=40;
    int result = search(arr,n,target);
    cout<<"Element found at index: "<<result;
    return 0;
}