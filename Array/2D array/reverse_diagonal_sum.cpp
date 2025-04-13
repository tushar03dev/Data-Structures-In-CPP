//
// Created by tushar on 12/6/24.
//
#include <iostream>
using namespace std;

int reverse_diagonal_sum(int arr[][3],int row) {
    int sum = 0;
    int j = 0;
    for (int i = row - 1; i >= 0; i--) {
        sum += arr[i][j++];
    }
    return sum;
}

int main() {
    int arr[3][3]={
            {10,20,30},
            {40,50,60},
            {70,80,90}
    };

    cout<<reverse_diagonal_sum(arr,3);

    return 0;
}