//
// Created by tushar on 23/11/24.
//
#include <iostream>
using  namespace std;

void merge(int arr[],int start,int end){
    int mid = start + (end-start)/2;
    int lenLeft = mid - start + 1;
    int lenRight = end - mid;

    int *left = new int [lenLeft];
    int *right = new int [lenRight];

    int k = start;
    for (int i = 0; i < lenLeft; ++i) {
        left[i] = arr[k];
        k++;
    }

    k = mid+1;
    for (int i = 0; i < lenRight; ++i) {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    // originalIndex should be from start
    int originalIndex = start;

    while(leftIndex < lenLeft && rightIndex < lenRight){
        if(left[leftIndex] < right[rightIndex]){
            arr[originalIndex] = left[leftIndex];
            leftIndex++;
        } else {
            arr[originalIndex] = right[rightIndex];
            rightIndex++;
        }
        originalIndex++;
    }

    while(leftIndex < lenLeft){
            arr[originalIndex] = left[leftIndex];
            leftIndex++;
            originalIndex++;
    }
    while(rightIndex < lenRight){
        arr[originalIndex] = right[rightIndex];
        rightIndex++;
        originalIndex++;
    }

    delete[] left;
    delete[] right;

}

void mergeSort(int arr[],int start,int end){
    if(start >= end) return;

    int mid = start + (end-start)/2;
    // left
    mergeSort(arr,start,mid);
    //right
    mergeSort(arr,mid+1,end);
    // merge 2 sorted arrays
    merge(arr,start,end);
}

int main() {
    int arr[] ={9,4,2,6,7,1,3};
    int size = 7;
    int start=0;
    int end = size -1;
    mergeSort(arr,start,end);

    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}