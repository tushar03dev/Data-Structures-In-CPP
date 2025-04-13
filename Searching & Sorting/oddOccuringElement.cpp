//
// Created by tushar on 17/7/24.
//
#include <iostream>
using namespace std;

int oddOccuringElement(int arr[],int n) {
    int start = 0;
    int end = n-1;
    while(start <= end) {
        int mid = start +(end -start)/2;
        if(start ==end){
            return start;
        }
        if(mid & 1){
            if(mid-1 >= 0 && arr[mid] == arr[mid-1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        else {
            if(mid+1 < n && arr[mid] == arr[mid+1]){
                start = mid+2;
            }
            else {
                end = mid;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] ={7,10,10,2,2,5,5,6,6,20,20,11,11,10,10};
    int n = 15;
    int index = oddOccuringElement(arr,n);
    cout<<"Element: "<<arr[index];
    return 0;
}