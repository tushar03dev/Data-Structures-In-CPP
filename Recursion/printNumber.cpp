//
// Created by tushar on 15/8/24.
//
#include <iostream>
using namespace std;

void printNumber(int n){

    if(n == 1)
        return;
    printNumber(n-1);
    cout<<n<<" ";

}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    printNumber(n);
    return 0;
}