//
// Created by tushar on 10/7/24.
//
#include <iostream>
using namespace std;

int pivotElement(int arr[],int n){
    int start =0;
    int end=n-1;
    while(start <= end) {
        int mid = start + (end - start)/2;
        // corner case
        if(start ==end) {
            // single element
            return start;
        }
        else if(arr[mid] < arr[mid -1]) {   // mid = 2
            return mid-1; //16
        }
        else if(arr[mid] > arr[mid+1]) {   // mid = 16
            return mid;
        }
        else if(arr[start] > arr[mid]) {   // on line B -> go left
            end = mid-1;
        }
        else {  // on line A -> go right
            start = mid +1;
        }
    }
    return -1;
}

int main() {
    int arr[]={2,5,6,0,0,1,2};
    int n=7;
    int pivotIndex = pivotElement(arr,n);
    cout<<"Pivot element is found at :"<<pivotIndex;
    return 0;
}