#include<iostream>
struct bstnode {
    int data;
    struct bstnode* left;
    struct bstnode* right;
};

bstnode* getnewnode(int data) {
    bstnode* newnode = new bstnode();
    newnode -> left = NULL;
    newnode -> data = data;
    newnode -> right = NULL;
    return newnode;
}

bstnode* Insert(bstnode* root,int data) {
    if(root==NULL) {
        getnewnode(data);
    }
    else if(data <= root->data) {
        root -> left = Insert(root ->left,data);
    }
    else {
        root -> right = Insert(root ->right,data);
    }
    return root;
}

int minnimum(bstnode* root) {
    if(root == NULL) {
        return -1;
    }
    else {
        while (root->left != NULL)
        {
            root = root->left;
        }    
    }
    return root->data;
}

int maximum(bstnode* root) {
    if(root == NULL) {
        return -1;
    }
    while (root->right !=NULL)
    {
        root = root -> right;
    }
    return root->data;
}

int main() {
    bstnode* root = NULL;
    root = Insert(root,10);
    root = Insert(root,20);
    root = Insert(root, 5);
    maximum(root);


}