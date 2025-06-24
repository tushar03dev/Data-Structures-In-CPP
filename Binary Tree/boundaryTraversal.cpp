//
// Created by tushar on 24/6/25.
//
#include <iostream>
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

void printLeftBoundary(Node* root){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) return;

    cout<<root->data<<" ";
    if(root->left) printLeftBoundary(root->left);
    else printLeftBoundary(root->right);

}

void printLeafNodes(Node* root){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr){
        cout<<root->data<<" ";
        return;
    }

    printLeafNodes(root->left);
    printLeafNodes(root->right);
}

void printRightBoundary(Node* root){
    if(root == nullptr) return;
    if(root->left == nullptr && root->right == nullptr) return;


    if(root->right) printRightBoundary(root->right);
    else printRightBoundary(root->left);
    cout<<root->data<<" ";
}

void boundaryTraversal(Node* root){
    if(root == nullptr) return;
    cout<<root->data<<" ";


    if(root->left) printLeftBoundary(root->left);

    if(root->left || root->right) printLeafNodes(root);  // condition when only root is present as it will print twice

    if(root->right) printRightBoundary(root->right);
}

int main(){
    Node* root = createNode();
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1 -1
    // 1 -1 2 3 4 -1 -1 -1 -1
    // 1 -1 2 -1 3 -1 -1
    cout<<"Printing Boundary Traversal:"<<endl;
    boundaryTraversal(root);
    return 0;
}