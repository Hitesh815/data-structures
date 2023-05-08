#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
};
node* createnode(int x){
    node*temp=new node;
    temp->data=x;
    temp->left=temp->right=NULL;
    return temp;
}
node* insert(node*root,int x){
    if(root==NULL){
        root=createnode(x);
    }
    else if(x<root->data){
        root->left=insert(root->left,x);
    }
    else{
        root->right=insert(root->right,x);
    }
    return root;
}
void inorder(node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node*root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void preorder(node*root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
int main(){
    node *root=createnode(20);
    insert(root,16);
    insert(root,23);
    insert(root,10);
    insert(root,18);
    insert(root,25);
    insert(root,22);
    inorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    cout<<root->data;
    return 0;
}