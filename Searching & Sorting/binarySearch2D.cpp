//
// Created by tushar on 17/7/24.
//
#include<iostream>
#include <vector>
using namespace std;

vector<int> binarySearch2D(vector<vector<int>>& matrix ,int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int totalSize = row*col;

    int start =0;
    int end = totalSize -1;
    while (start <= end) {
        int mid = start + (end-start)/2;
        int rowIndex = mid/col;
        int colIndex = mid % col;
        int currNumber = matrix[rowIndex][colIndex];

        if(currNumber == target) {
            return {rowIndex,colIndex};
        }
        else if (currNumber > target) {
            end = mid -1;
        }
        else {
            start = mid+1;
        }
    }
    return {};
}

int main() {
    vector<vector<int>> matrix = {{1,3,5,7},
                       {10,11,16,20},
                       {23,30,34,60,}};
    int target = 60;
    vector<int> index = binarySearch2D(matrix,target);
    cout<<"ELement found at indices: "<< index[0]<<" "<<index[1];
    return 0;
}