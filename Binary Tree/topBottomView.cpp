//
// Created by tushar on 24/6/25.
//
#include <iostream>
#include <queue>
#include <map>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

Node* createNode(){
    cout<<"Enter the value for Node: "<<endl;
    int value;
    cin>>value;

    if(value == -1) return nullptr;

    Node* root = new Node(value);

    cout<< "Entering in left of "<<value<<endl;
    root->left = createNode();
    cout<<"Entering the right of "<<value<<endl;
    root->right = createNode();

    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == nullptr){
            cout<<endl;
            if(!q.empty()) q.push(nullptr);
        } else {
            cout<<front->data<<" ";

            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }
    }
}

void topView(Node* root){
    map<int,int> mp;
    queue<pair<Node*,int>> q;

    q.emplace(root,0); // instead of q.push(make_pair(root,0)); -> it calls constructor no need to create a pair first

    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int level = temp.second;

        if(mp.find(level) == mp.end()) mp[level] = frontNode->data;

        if(frontNode->left) q.emplace(frontNode->left,level-1);
        if(frontNode->right) q.emplace(frontNode->right,level+1);
    }

    cout<<"printing Top View: "<<endl;
    for(auto x : mp){
        cout<<x.second<<" ";
    }

}

void bottomView(Node* root){
    map<int,int> mp;
    queue<pair<Node*,int>> q;

    q.emplace(root,0); // instead of q.push(make_pair(root,0)); -> it calls constructor no need to create a pair first

    while(!q.empty()){
        pair<Node*,int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int level = temp.second;

        mp[level] = frontNode->data;

        if(frontNode->left) q.emplace(frontNode->left,level-1);
        if(frontNode->right) q.emplace(frontNode->right,level+1);
    }

    cout<<"printing Bottom View: "<<endl;
    for(auto x : mp){
        cout<<x.second<<" ";
    }

}

int main(){
    Node* root = createNode();
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1 -1
    levelOrderTraversal(root);
    topView(root);
    cout<<endl;
    bottomView(root);
    return 0;
}