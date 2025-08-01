//
// Created by tushar on 7/10/24.
//
#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertIntoBST(Node* &root, int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = insertIntoBST(root->right,data);
    } else {
        root->left = insertIntoBST(root->left,data);
    }
    return root;
}

void createBST(Node* &root){
    cout<<"Enter data:"<<endl;
    int data;
    cin>>data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cout<<"Enter data:"<<endl;
        cin>>data;
    }
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

void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL) return;
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL) return;
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}

Node* minValue(Node* root){
    if(!root){
        cout<<"NO Min Value";
        return NULL;
    }

    Node* temp = root;
    while(temp->left){
        temp = temp->left;
    }
    return temp;
}

Node* maxValue(Node* root){
    if(!root){
        cout<<"NO Max Value";
        return NULL;
    }

    Node* temp = root;
    while(temp->right){
        temp = temp->right;
    }
    return temp;
}

bool search(Node* root, int target){
    if(!root) return false;
    if(root->data == target) return true;

    bool leftAns = search(root->left,target);
    bool rightAns = search(root->right, target);
    return leftAns || rightAns;
}

Node* deletefromBST(Node* root, int target){
    if(!root) return NULL;

    if(root->data == target){
        // four cases
        // 1. leaf node
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }
        // 2. left = NULL and right = Not null
        else if(!root->left){
            Node* rightChildTree = root->right;
            delete root;
            return rightChildTree;
        }
        // 3. right = NULL and left = Not NULL
        else if(!root->right){
            Node* leftChildTree = root->left;
            delete root;
            return leftChildTree;
        }
        // 4 both not NULL
        else {
            // find max of left sub-tree
            Node* maxi = maxValue(root->left);
            // replace with root
            root->data = maxi->data;

            root->left = deletefromBST(root->left, maxi->data);

        }
    }
    else if(root->data > target){
        return deletefromBST(root->left,target);
    }
    else{
        return deletefromBST(root->right,target);
    }
    return root;
}


Node* bstfromInorder(vector<int> &inorder,int s, int e){
    if(s > e) return NULL;

    int mid = s + (e-s)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    root->left = bstfromInorder(inorder,s,mid-1);
    root->right = bstfromInorder(inorder,mid+1,e);

    return root;
}

int main(){
//    Node* root = NULL;
//    createBST(root);

    // 50 30 60 25 40 70 80 -1

//    cout<<"level-order"<<endl;
//    levelorderTraversal(root);
//
//    cout<<"preorder"<<endl;
//    preorder(root);
//    cout<<endl;
//
//    cout<<"inorder"<<endl;
//    inorder(root);
//    cout<<endl;
//
//    cout<<"postorder"<<endl;
//    postorder(root);
//    cout<<endl;
//
//    cout<<"Min Value "<<minValue(root)->data<<endl;
//    cout<<"Max Value "<<maxValue(root)->data<<endl;
//
//    int t;
//    cout<<"Enter target"<<endl;
//    cin>>t;
//
//    bool ans = search(root,t);
//    if(ans){
//        cout<<t<<" Found"<<endl;
//    } else{
//        cout<<t<<" not found"<<endl;
//    }


     vector<int> inorder = {10,20,30,40,50,60,70};
     int size = 7;
     Node* root = bstfromInorder(inorder, 0, size-1);

    levelorderTraversal(root);

    return 0;
}