//
// Created by tushar on 27/5/24.
//
#include <iostream>
using namespace std;

void shiftByOne(int arr[], int n) {
    int  temp = arr[n - 1];
    for (int i = n-1; i > 0 ; i--) {
        arr[i] = arr[i-1];
    }
    arr[0]= temp;
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] ={10,20,30,40,50,60};
    int n = 6;

    shiftByOne(arr,n);

}