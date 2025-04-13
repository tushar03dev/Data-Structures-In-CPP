//
// Created by tushar on 18/7/24.
//
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>(&v)){
    for(int x:v)
        cout<<x<<" ";
}
void bubbleSort(vector<int> &v){
  int n = v.size();
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if(v[j] > v[j+1])
                swap(v[j],v[j+1]);
        }
    }
}

int main(){
    vector<int> v ={50,40,30,20,10};
    bubbleSort(v);
    print(v);
    return 0;
}