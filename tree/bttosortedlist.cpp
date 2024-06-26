#include <iostream>
#include<algorithm>
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
vector<int> increasingBST(node* root) {
        vector<int> k;
        queue<node*> q;
        q.push(root);
        while(!q.empty()){
            node* temp= q.front();
            k.push_back(temp->data);
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        sort(k.begin(),k.end());

    return k;
}
void print(vector<int> k){
    for(int i=0;i<k.size();i++){
        cout<<k[i]<<" ";
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    vector<int> p = increasingBST(root);
    print(p);
    // 18 2 22 -1 -1 -1 63 -1 84 -1 -1

    return 0;
}