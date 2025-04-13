//
// Created by tushar on 5/8/24.
//
#include <iostream>
#include <vector>
using namespace std;

void shiftByOne(vector<int> &arr, int start, int mid) {
    int temp = arr[mid];
    for (int i = mid; i > start; i--) {
        arr[i] = arr[i-1];
    }
    arr[start] = temp;
}

void moveZero(vector<int> &arr) {
    int n = arr.size();
    int start = 0;
    while (start < n) {
        if (arr[start] != 0) {
            start++;
            continue;
        }
        int mid = start + 1;
        while (mid < n && arr[mid] == 0) {
            mid++;
        }
        if (mid < n) {
            shiftByOne(arr, start, mid);
        }
        start++;
    }
}

void print(const vector<int> &arr) {
    for (auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {0, 1, 2, 0, 0, 3, 4, 0, 5, 0};
    moveZero(arr);
    print(arr);
    return 0;
}
