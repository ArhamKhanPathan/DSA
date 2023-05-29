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
        delete  right;
    }
};

binaryTreeNode<int>* levelWiseInput()
{
    int rootData;
    cout<<"Enter Root Data: "<<endl;
    cin>>rootData;

    if(rootData == -1) return NULL;
    binaryTreeNode<int>* root = new binaryTreeNode<int>(rootData);

    queue<binaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        binaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();

        int leftData;
        cout<<"Enter Left Child of "<<front->data<<": "<<endl;
        cin>>leftData;
        if(leftData != -1)
        {
            binaryTreeNode<int>* leftNode = new binaryTreeNode<int>(leftData);
            front->left = leftNode;
            pendingNodes.push(leftNode);
        }

        int rightData;
        cout<<"Enter Right child of "<<front->data<<": "<<endl;
        cin>>rightData;
        if(rightData != -1)
        {
            binaryTreeNode<int>* rightNode = new binaryTreeNode<int>(rightData);
            front->right = rightNode;
            pendingNodes.push(rightNode);
        }
    }
    return root;
}

int numNodes(binaryTreeNode<int>* root)
{
    if(root == NULL) return 0;

    return 1+ numNodes(root->left) + numNodes(root->right);
}

int isNode(binaryTreeNode<int>* root, int k)
{
    if(root == NULL) return false;

    if(root->left->data == k || root->right->data == k) return true;
    return false;

}

int maxHight(binaryTreeNode<int>* root)
{
    if(root == NULL) return 0;

    int lh = maxHight(root->left);
    int rh = maxHight(root->right);

    return max(lh,rh)+1;
}
int main()
{
    binaryTreeNode<int>* root = levelWiseInput();
    // cout<<isNode(root, 10);
    cout<<maxHight(root);
    return 0;
}