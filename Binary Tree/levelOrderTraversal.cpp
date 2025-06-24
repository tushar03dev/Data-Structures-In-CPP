//
// Created by tushar on 11/6/25.
//
#include <iostream>
#include <queue>
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

void levelorderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front == nullptr) {
            cout << endl;
            if(!q.empty()) q.push(nullptr);
        } else{
            cout<<front->data<<" ";

            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right);
        }

    }

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
    levelorderTraversal(root);
    return 0;
}