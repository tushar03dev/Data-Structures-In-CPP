//
// Created by tushar on 28/5/24.
//
#include <iostream>
using namespace std;

void shiftByK(int arr[],int n, int k) {
    int *temp_arr; //declare a pointer to hold array address;

    k %= n; //handle cases where k is greater than n

    temp_arr = new int[k];

    for (int i = n-k,j =0; i < n ; i++) {
        temp_arr[j++]= arr[i];
    }
    for (int i = 0; i < k; ++i) {
        cout<<temp_arr[i]<<" ";
    }
    cout<<endl;
    for (int i = n - 1; i > k-1; i--) {
        arr[i] = arr[i-k];
    }

    for (int i = 0,l = 0; i < k; ++i) {
        arr[l++] = temp_arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }
    delete[] temp_arr;
}

int main() {
    int arr[] ={10,20,30,40,50,60};
    int n = 6;
    int k;
    cout<<"Enter the shift number:"<<endl;
    cin>>k;

    shiftByK(arr,n,k);

}