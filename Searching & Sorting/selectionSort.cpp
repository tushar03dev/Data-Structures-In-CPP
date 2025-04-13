//
// Created by tushar on 18/7/24.
//
#include <iostream>
#include<vector>
using namespace  std;

void print(vector<int>(&v)){
    for(int x:v){
        cout<<x<<" ";
    }
}

void selectionSort(vector<int> &v){
    int n = v.size();
    for (int i = 0; i < n-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < n; ++j) {
            if(v[j] < v[minIndex])
                minIndex = j;
        }
        swap(v[minIndex],v[i]);
    }
}

int main(){
    vector<int> v = {50,40,30,20,10};
    selectionSort(v);
    print(v);
    return 0;
}