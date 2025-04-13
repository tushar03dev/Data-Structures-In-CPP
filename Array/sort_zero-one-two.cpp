//
// Created by tushar on 28/5/24.
//Dutch national flag problem

#include <iostream>
using namespace std;

void sort_012(int arr[],int n) {
    int lo = 0;
    int mid = 0;
    int hi = n-1;

    while(mid <= hi) {
        switch(arr[mid]){
            case 0:
                swap(arr[lo++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[hi--]);
                break;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {0,1,2,0,1,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    sort_012(arr,n);
}
