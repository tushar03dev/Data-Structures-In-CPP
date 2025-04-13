//
// Created by tushar on 10/7/24#

#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int target) {
    int start = 0;
    int end = n-1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            start = mid +1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10,20,30,40,50,60,70};
    int target = 10;
    int n = 7;
    int index = binarySearch(arr,n,target);
    cout<<"ELement found at index "<<index;

    return 0;
}