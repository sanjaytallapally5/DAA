#include <iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void levelOrder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    levelOrder(root->left);
    levelOrder(root->right);
}
int main(){
    node* root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);  
    levelOrder(root);
}