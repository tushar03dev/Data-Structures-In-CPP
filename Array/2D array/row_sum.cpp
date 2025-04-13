//
// Created by tushar on 12/6/24.
//
#include <iostream>
using namespace std;

void row_sum(int arr[][3],int row,int col) {
    for (int i = 0; i < row; ++i) {
        int sum = 0;
        for (int j = 0; j < col; ++j) {
            sum += arr[i][j];
        }
        cout << "sum of " << i << " row: " << sum<<endl;
    }
}

int main() {

    int arr[3][3]={
            {10,20,30},
            {40,50,60},
            {70,80,90}
    };

    row_sum(arr,3,3);

    return 0;
}