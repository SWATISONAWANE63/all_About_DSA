#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=right= NULL;
    }
};
static int idx=-1;
node* buildTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    node* root=new node(preorder[idx]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
void preOrder(node* root){
    if(root==NULL){
        return;

    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
 
void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postOrder(node *root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        node* curr=q.front();
        q.pop();
        if(curr==NULL){
            if(!q.empty()){
            cout<<endl;
            q.push(NULL);
            continue;
            }else{
                break;
            }
        }
        cout<<curr->data<<" ";
        if(curr->left !=NULL){
            q.push(curr->left);
        }if(curr->right){
            q.push(curr->right);
        }
    }
}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root=buildTree(preorder);
    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;
    // cout<<root->right->data<<endl;
    // preOrder(root);
    // cout<<endl;
    // inorder(root);
    // cout<<endl;
    // postOrder(root);
    // cout<<endl;
    levelOrder(root);


    return 0;
}