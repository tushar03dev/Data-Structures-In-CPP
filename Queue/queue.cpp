//
// Created by tushar on 1/9/25.
//
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

    q.pop();
    cout<<q.size()<<endl;
    q.push(10);
    q.push(20);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;
}