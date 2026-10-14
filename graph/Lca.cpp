#include <iostream>
using namespace std;
struct node {
    int data;
    node *left;
    node *right;
    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
node* lca(node* root,int n1,int n2) {
    if (root == NULL) 
    return NULL;
    if (root->data==n1 || root->data==n2) 
    return root;
    node* Left = lca(root->left, n1, n2);
    node* Right = lca(root->right, n1, n2);
    if (Left!=NULL&& Right!=NULL) 
    return root;
    if(Left!=NULL)
        return Left;
    else
        return Right;
}
int main() {
    node* root =new node(1);
    root->left =new node(2);
    root->right =new node(3);
    root->left->left =new node(4);
    root->left->right =new node(5);
    int n1=4,n2=5;
    node* lcaNode = lca(root, n1, n2);
    if(lcaNode!= NULL)
        cout<<"lca is: "<<lcaNode->data<<endl;
    else
        cout<<"LCA not found"<<endl;
    return 0;
}