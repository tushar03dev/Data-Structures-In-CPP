//
// Created by tushar on 12/6/24.
//
#include <iostream>
#include <climits>
using namespace std;

int max_no(int arr[][3],int row,int col) {
    int max = INT_MIN;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if(arr[i][j] > max)
                max = arr[i][j];
        }
    }

    return max;
}

int main() {

    int arr[3][3] ={
            {10,20,30},
            {40,50,60},
            {70,80,90}
    };
    cout<< max_no(arr,3,3);

    return 0;
}