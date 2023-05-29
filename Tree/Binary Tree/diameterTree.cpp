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

int height(binaryTreeNode<int>* root)
{
    if(root == NULL) return 0;

    return 1 + max(height(root->left) , height(root->right));
}

int diameter(binaryTreeNode<int>* root)
{
    if(root == NULL) return 0;

    int option1 = height(root->left) + height(root->right);
    int option2 = diameter(root->left);
    int option3 = diameter(root->right);

    return max(option1, max(option2, option3));
}

pair<int, int>heightDia(binaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        pair<int,int> p;
        p.first = 0;
        p.second= 0;
        return p;

    }

    pair<int,int> leftSide = heightDia(root->left);
    pair<int,int> rightSide = heightDia(root->right);

    int lh = leftSide.first;
    int ld = leftSide.second;
    int rh = rightSide.first;
    int rd = rightSide.second;

    int h = 1 + max(lh,rh);
    int d = max(lh+rh, max(ld, rd));
    pair<int,int>p;

    p.first = h;
    p.second = d;
    return p;
}

int main()
{
    binaryTreeNode<int>* root = levelWiseInput();

    // cout<<diameter(root);
    pair<int,int>p = heightDia(root);

    cout<<p.first<<endl;
    cout<<p.second<<endl;
    return 0;
}