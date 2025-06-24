//
// Created by tushar on 24/6/25.
//
#include <iostream>
#include <vector>
#include <queue>

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

void printLeftView(Node* root, int level, vector<int> & leftView){
    if(root == NULL) return;

    if(level == leftView.size()) {
        leftView.push_back(root->data);
    }
    printLeftView(root->left,level+1,leftView);
    printLeftView(root->right, level+1, leftView);
}

void printRightView(Node* root, int level, vector<int> & rightView){
    if(root == NULL) return;

    if(level == rightView.size()) {
        rightView.push_back(root->data);
    }
    printRightView(root->right, level+1, rightView);
    printRightView(root->left,level+1,rightView);
}

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

int main() {
    Node* root = createNode();
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1 -1
    levelorderTraversal(root);
    vector<int> leftView;
    vector<int> rightView;
    printLeftView(root, 0, leftView);
    for (int i : leftView) {
        cout<<i<<" ";
    }
    cout<<endl;
    printRightView(root, 0, rightView);
    for(int x : rightView){
        cout<<x<<" ";
    }
    return 0;
}