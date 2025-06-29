//
// Created by tushar on 29/6/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,vector<int> &arr3) {
    int i = 0;
    int j = 0;
    int k = 0;
    vector<int> ans;
    while(i < arr1.size() && j < arr2.size() && k < arr3.size()){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            if(ans.empty() || ans.back() != arr1[i]) ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
        } else {
            int mini = min({arr1[i], arr2[j], arr3[k]});
            if (arr1[i] == mini) i++;
            if (arr2[j] == mini) j++;
            if (arr3[k] == mini) k++;
        }
    }
    return ans;
}

void print(vector<int>& ans){
    for(int x : ans){
        cout<<x<<" ";
    }
}

int main(){
    vector<int> arr1 = {11, 13, 14, 45, 62, 72, 79, 90};
    vector<int> arr2 = {13, 24, 27, 31, 62, 74, 89, 89, 96};
    vector<int> arr3 = {12, 48, 58, 60, 62, 65, 88};

    vector<int> ans = commonElements(arr1, arr2, arr3);
    print(ans);
    return 0;
}