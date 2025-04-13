//
// Created by tushar on 23/11/24.
//
#include <iostream>
using namespace std;

void quickSort(int arr[],int start,int end){

    if(start >= end) return;

    int pivot = end;
    int i = start-1;
    int j =start;
    while(j < pivot){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;// i is the right position of pivot element
    swap(arr[i],arr[pivot]);

    //right
    quickSort(arr,start,i-1);
    //left
    quickSort(arr,i+1,end);

}

int main(){
    int arr[] = {7,2,1,8,6,3,5,4};
    int size = 8;
    int start=0;
    int end = size-1;
    quickSort(arr,start,end);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}