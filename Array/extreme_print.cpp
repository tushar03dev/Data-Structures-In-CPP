//
// Created by tushar on 16/1/24.
//
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int left = 0;
    int right = size - 1;
    while(left <= right) {
        if(left == right) {
            cout<<arr[left];
        }
        else {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
            left++;
            right--;

    }

    return 0;
}