//
// Created by tushar on 16/1/24.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<" ";
    }

    return 0;
}