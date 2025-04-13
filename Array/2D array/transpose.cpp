//
// Created by tushar on 12/6/24.
//
#include <iostream>
using namespace std;

void print(int arr[][3],int row,int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpose(int arr[][3],int row,int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = i; j < col; ++j) {
            swap(arr[i][j],arr[j][i]);
        }
    }

    print(arr,3,3);
}

int main() {

    int arr[3][3] = {
            {10,20,30},
            {40,50,60},
            {70,80,90}
    };

    transpose(arr,3,3);

    return 0;
}
