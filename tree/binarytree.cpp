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
    cout << "enter the root data " << endl;
    int data;
    cin >> data;
    
    if (data == -1)
    {
        return NULL; 
    }

    // create a node for root
    root = new node(data);

    // for left case
    cout << "enter the valve in left of  " << data << endl;
    root->left = buildtree(root->left);
    // for right case
    cout << "enter the valve in right of  " << data << endl;
    root->right = buildtree(root->right);
    return root;
}
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



int main()
{
    node *root = NULL;
    root = buildtree(root);
    levelordartrevel(root);
    // 18 2 22 -1 -1 -1 63 -1 84 -1 -1

    return 0;
}