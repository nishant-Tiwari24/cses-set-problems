#include<iostream>
#include<algorithm>
using namespace std;

struct bst {
    int data;
    struct bst* left;
    struct bst* right;
};

bst* givenewnode(int data) {
    struct bst* newnode = new bst();
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

bst* Insert(bst* root,int data) {
    if(root == NULL) {
        return givenewnode(data);
    }
    else if(data <= root->data) {
        root->left = Insert(root->left,data);
    }
    else {
        root->right = Insert(root->right,data);
    }
    return root;
}

int height(bst* root) {
    if(root == NULL) {
        return -1;
    }
    else {
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int h = max(leftheight,rightheight) + 1;
        return h;
    }
}

int main() {
    struct bst* root = NULL;
    root = Insert(root,10);
    root = Insert(root,20);
    cout<<height(root);
    
return 0;

}