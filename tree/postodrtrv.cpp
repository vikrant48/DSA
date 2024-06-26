#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "enter the data " << endl;
    int data;
    cin >> data;
    // create a node for root
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    // for left case
    cout << "enter the valve in left of  " << data << endl;
    root->left = buildtree(root->left);
    // for right case
    cout << "enter the valve in right of  " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
void postordertrev(node* root){
    // base case 
    if(root==NULL)
    return;
   // LRN
    postordertrev(root->left);
    postordertrev(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    postordertrev(root);
    // 18 2 22 -1 -1 -1 63 -1 84 -1 -1

    return 0;
}