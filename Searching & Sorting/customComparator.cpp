//
// Created by tushar on 18/7/24.
//
#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

void print(vector<vector<int>> &v){
    for(const vector<int>& x:v){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

bool mycomp(vector<int> &a,vector<int> &b){
    return a[1]<b[1];
}

int main(){
    vector<vector<int>> v ={{0,11},{2,33},{5,22},{3,29},{4,55}};
    sort(v.begin(),v.end(),mycomp);
    print(v);
    return 0;
}