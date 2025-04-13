//
// Created by tushar on 22/11/24.
//
#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int start,int end){
    if(start > end) return -1;
    int mid = start + (end - start)/2;
    if(arr[mid] == target) return mid;
    else if(arr[mid] < target){
        return binarySearch(arr,target,mid+1,end);
    } else{
        return binarySearch(arr,target,start,mid-1);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int size=10;
    int target = 90;
    cout<<binarySearch(arr,target,0,size-1);
    return 0;
}