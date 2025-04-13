//
// Created by tushar on 27/5/24.
//
#include <iostream>
#include <climits>
using namespace std;

void findMin(int arr[],int size) {
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++) {
        minAns = min(arr[i],minAns);
    }
    cout<<"min: "<<minAns<<endl;
}
void findMax(int arr[],int size){
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++) {
        maxAns = max(arr[i],maxAns);
    }
    cout<<"max: "<<maxAns;
}
int main() {
    int arr[] = {10,8,7,17,54,33,4,64,2};
    int size = 9;

    findMin(arr,size);
    findMax(arr,size);
}