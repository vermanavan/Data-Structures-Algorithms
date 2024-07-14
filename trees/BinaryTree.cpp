#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<< "Enter the Data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if (data == -1) return NULL;
    cout<<"Enter data for insertion in left "<<data<<endl;
    root->left= buildTree(root->left);
    cout<<"Enter data for insertion in right "<<data<<endl;
    root->right= buildTree(root->right);
    return root;
}

void inorder(node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root-> right); 

}
void preorder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postOrder(node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void LevelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        } 
        }  
    }
}


int main(){
    node* root = NULL;
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    LevelOrderTraversal(root);

    cout<<"Inorder traverasakl"<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"Postorder traversal"<<endl;
    postOrder(root);
return 0;
}