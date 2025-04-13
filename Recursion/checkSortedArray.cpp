//
// Created by tushar on 22/11/24.
//
#include <iostream>
using namespace std;

bool checkSorted(int arr[],int size, int index){
    if(index >= size){
        return true;
    }
    else if(arr[index] > arr[index-1]){
        return checkSorted(arr,size,index+1);
    } else {
        return false;
    }
}

int main(){
    int arr[] ={10,20,30,40,50,60,70,80,90,100};
    int size = 10;
    cout<<checkSorted(arr,size,1);
    return 0;
}