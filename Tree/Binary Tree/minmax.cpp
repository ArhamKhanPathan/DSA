#include<bits/stdc++.h>
using namespace std;

template<typename T>

class binaryTreeNode
{
    public:
    T data;

    binaryTreeNode* left;
    binaryTreeNode* right;

    binaryTreeNode(T data)
    {
        this->data = data;
    }

    ~binaryTreeNode()
    {
        delete left;
        delete right;
    }
};

binaryTreeNode<int>* levelWiseInput()
{
    int rootData;
    cout<<"Enter Root Data: "<<endl;
    cin>>rootData;
    if(rootData == -1) return NULL;
    binaryTreeNode<int>* root = new binaryTreeNode<int>(rootData);

    queue<binaryTreeNode<int>*>pendinNodes;
    pendinNodes.push(root);

    while(pendinNodes.size() != 0)
    {
       binaryTreeNode<int>* front = pendinNodes.front();
       pendinNodes.pop();

        int leftData;
        cout<<"Enter Left child of "<<front->data<<": "<<endl;
        cin>>leftData;
        if(leftData != -1)
        {
            binaryTreeNode<int>* child = new binaryTreeNode<int>(leftData);
            front->left = child;
            pendinNodes.push(child);
        }
        int rightData;
        cout<<"Enter Right child of "<<front->data<<": "<<endl;
        cin>>rightData;
        if(rightData != -1)
        {
            binaryTreeNode<int>* child = new binaryTreeNode<int>(rightData);
            front->right = child;
            pendinNodes.push(child);
        }
    }

    return root;
}

vector<int> minmaxHelp(binaryTreeNode<int>* root)
{
    vector<int>v;
    if(root == NULL) return;

    v.push_back(root->data);

    if(root->left != NULL) v.push_back(root->left->data);
    if(root->right != NULL) v.push_back(root->right->data);
    // cout<<endl;
    minmaxHelp(root->left);
    minmaxHelp(root->right);

    sort(v.begin(), v.end());
    return v;

}

pair<int,int> minmax(binaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        pair<int,int>p;
        p.first = 0;
        p.second = 0;
        return p;

    }

    vector<int> v = minmaxHelp(root);

    pair<int,int>p;
    p.first = v[0];
    p.second = v[v.size()-1];

    return p;
    
}

int main()
{
    binaryTreeNode<int>* root = levelWiseInput();

    pair<int,int>p = minmax(root);
    
}