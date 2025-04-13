//
// Created by tushar on 12/6/24.
//
#include <iostream>
using namespace std;

int diagonal_sum(int arr[][3],int row,int col) {
    int sum = 0;
    for (int i = 0; i < row; ++i) {
        sum += arr[i][i];
    }
    return sum;
}

int main() {
    int arr[3][3]={
            {10,20,30},
            {40,50,60},
            {70,80,90}
    };

    cout<<diagonal_sum(arr,3,3);
}