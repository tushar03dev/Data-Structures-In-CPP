#include <iostream>
using namespace std;

bool linear_search(int arr[][3],int row,int col,int target) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if(arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int main() {
    int arr[3][3] ={
            {10,20,30},
            {40,50,60},
            {70,80,90}
            };
    cout<< linear_search(arr,3,3,70);


    return 0;
}