#include <iostream>
#include<queue>
#include<algorithm>
using namespace std;

class Treenode
{
public:
    int data;
    Treenode *left;
    Treenode *right;

    Treenode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Treenode *buildtree(Treenode *root)

{
    int d;
    cout << "enter the data " <<endl;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    root = new Treenode(d);

    cout << "data for the left of " << d << endl;
    root->left = buildtree(root->left);
    cout << "data for the right of " << d << endl;
    root->right = buildtree(root->right);

    return root;
}

void levelordertrev(Treenode* root){
    queue<Treenode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Treenode* temp= q.front();
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
void inordertrev(Treenode* root){
    if(root==NULL){
        return;
    }
    //lnr
    inordertrev(root->left);
    cout<<root->data<<" ";
    inordertrev(root->right);

}
void preordertrev(Treenode* root){
    if(root==NULL){
        return;
    }
    //nlr
    cout<<root->data<<" ";
    preordertrev(root->left);
    preordertrev(root->right);

}
void postordertrev(Treenode* root){
    if(root==NULL){
        return;
    }
    //lrn
    inordertrev(root->left);
    inordertrev(root->right);
    cout<<root->data<<" ";

}

int main()
{
    Treenode *root = NULL;
    root = buildtree(root);
    levelordertrev(root);
    cout<<endl;
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    inordertrev(root);
    cout<<endl;
    preordertrev(root);
    cout<<endl;
    postordertrev(root);
    cout<<endl;    
    return 0;
}