//
// Created by tushar on 11/6/25.
//
#include <iostream>
using namespace std;

class Node{
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

void inorderTraversal(Node* root){
    if(root == nullptr) return;
    // L
    inorderTraversal(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inorderTraversal(root->right);
}

Node* createNode(){
    cout<<"Enter the value for Node: "<<endl;
    int data;
    cin>>data;

    if(data == -1) return NULL;

    Node* root = new Node(data);
    root->left = createNode();
    root->right = createNode();

    return root;
}

int main(){
    Node* root = createNode();
    inorderTraversal(root);
    return 0;
}