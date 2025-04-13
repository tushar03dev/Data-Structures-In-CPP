//
// Created by tushar on 12/6/24.
//
#include <iostream>
using namespace std;

void col_sum(int arr[][3],int row,int col) {
    for (int i = 0; i < col; ++i) {
        int sum = 0;
        for (int j = 0; j < row; ++j) {
            sum += arr[j][i];
        }
        cout<<"sum of "<<i<<" col: "<<sum<<endl;
    }
}

int main() {

    int arr[3][3]={
            {10,20,30},
            {40,50,60},
            {70,80,90}
    };

    col_sum(arr,3,3);

    return 0;
}