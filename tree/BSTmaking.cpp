#include <iostream>
#include<queue>
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

void levelordartrevel(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
node *inserttoBST(node *root, int d)
{
    if (root == NULL)
    {
        root = new node(d);
        return root;
    }
    if (d < root->data)
    {
        root->left = inserttoBST(root->left, d);
    }
    if (d > root->data)
    {
        root->right = inserttoBST(root->right, d);
    }
    return root;
}
void intakedata(node *&root)
{
    int d;
    cout << "enter the data for BST " << endl;
    cin >> d;
    while (d != -1)
    {
        root = inserttoBST(root, d);
        levelordartrevel(root);
        cout<<endl;
        cin >> d;
    }
}

int main()
{
    node *root = NULL;
    intakedata(root);

    return 0;
}