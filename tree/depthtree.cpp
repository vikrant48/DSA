 #include<iostream>
using namespace std;


class node{
    public:
       int data;
       node* left;
       node* right;
};
 node* newnode(int data){
    node* temp=new node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
 }

 int depth(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=depth(root->left);
    int rheight=depth(root->right);
    if(lheight>=rheight){
        return 1+lheight;
    }
    else{
        return 1+rheight;
    }

 }

int main(){
    node* root=newnode(1);
    root->left=newnode(2);
    root->left->left=newnode(4);
    root->right=newnode(3);
    int depthoftree=depth(root);
    cout<<" depth of tree "<< depthoftree<<endl;
    return 0;
}