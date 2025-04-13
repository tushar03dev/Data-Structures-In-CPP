//
// Created by tushar on 18/1/24.
//
#include <iostream>
using namespace std;

void zeroOneSort(int arr[],int size) {
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; ++i) {
        if(arr[i] == 0 ) {
            zeroCount++;
        }
        else {
            oneCount++;
        }
    }
    // Easy Way
    int index = 0;
    while(zeroCount--) {
        arr[index] = 0;
        index++;
    }
    while(oneCount--) {
        arr[index] = 1;
        index++;
    }
    //Difficult way
//    int i;
//    for ( i = 0; i < zeroCount; i++) {
//        arr[i] = 0;
//    }
//    for (int j = i; j < size;j++) {
//        arr[j] = 1;
//    }
}

int main() {
    int arr[] = {1,0,1,0,1,0,1,1,1,0,1,0,0,0};
    int size = 14;
    zeroOneSort(arr,size);
    //printing the array
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<" ";
    }
    return 0;
}