//
// Created by tushar on 1/9/25.
//
#include <iostream>
#include <queue>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(20);
    dq.pop_front();


    cout<<dq.front() << endl;
    cout<<dq.back() <<endl;
    cout<<dq.size()<<endl;
    return 0;
}