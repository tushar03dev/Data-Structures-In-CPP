//
// Created by tushar on 17/1/24.
//
#include <iostream>
using namespace std;

int getUnique(int arr[],int size) {
    int ans = 0;
    for (int i = 0; i < size; ++i) {
        ans = ans^arr[i];
    }
    return ans;
}
int main() {
    int arr[13] = {3,4,5,6,3,4,5,3,4,5,3,4,5};
    int size = 13;
    int finalAns = getUnique(arr,size);
    cout<<"final answer:"<<finalAns<<endl;
    return 0;
}