 #include<iostream>
 #include<vector>
 #include<queue>
 #include<algorithm>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node*right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* sortedArrayToBST(vector<int>& nums) {
       cout<<"aaya hai1"<<endl;
        sort(nums.begin(),nums.end());
        int s=0;
        int n=nums.size()-1;
        int mid= s+(n-s)/2;
        node* root= new node(nums[mid]);
       
        node* temp = root;
        node* ftemp=root;
        for(int i=mid-1;i>=0;i--){
            cout<<"aaya hai2"<<endl;
            node* ltemp = new node(nums[i]);
            temp->left=ltemp;
            temp=temp->left;
        }
        for(int i=mid+1;i<=n;i++){
            cout<<"aaya hai3"<<endl;
            node* rtemp = new node(nums[i]);
            ftemp->right=rtemp;
            ftemp=ftemp->right;
        }

    return root;    
    }
    void levelordartrevel(node *root)
{
    cout<<"aaya hai4"<<endl;
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

int main(){
    vector<int> p = {-10,-3,0,5,9};
    node* root =sortedArrayToBST(p);
    levelordartrevel(root);
    
    return 0;
}