 //
// Created by tushar on 18/1/24.
//
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {1,2,3,4};
    int size = 4;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
        }
    }
    return 0;
}