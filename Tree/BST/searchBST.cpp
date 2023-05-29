#include<bits/stdc++.h>
using namespace std;
template<typename T>

class binaryTreeNode
{
    public:
    T data;

    binaryTreeNode *left;
    binaryTreeNode *right;

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
    binaryTreeNode<int> *root = new binaryTreeNode<int>(rootData);

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
            binaryTreeNode<int>* child = new binaryTreeNode<int>(leftData);
            front->left = child;
            pendingNodes.push(child);

        }

        int rightData;
        cout<<"Enter right child of "<<front->data<<": "<<endl;
        cin>>rightData;
        if(rightData != -1)
        {
            binaryTreeNode<int>* child = new binaryTreeNode<int>(rightData);
            front->right = child;
            pendingNodes.push(child);

        }
    }
    return root;
}

int searchBST(binaryTreeNode<int>* root, int k)
{
    if(root == NULL) return 0;

    if(root->data == k) return root->data;

    if(root->data > k) searchBST(root->left,k);
    if(root->data < k) searchBST(root->right,k);
}

int eleInRange(binaryTreeNode<int>* root, int a, int b)
{
    if(root == NULL) return;
    vector<int>res;
    if(root->data>a && root->data < b) res.push_back(root->data);
    if(root->data < a) eleInRange(root->left, a, b);
    if(root->data > b) eleInRange(root->right,a, b);
}
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
int main()
{
    binaryTreeNode<int>* root = levelWiseInput();
    int k = 3;
    int a,b;
    cout<<"Enter Min Data Value: ";
    cin>>a;
    cout<<"\n Enter Max Data Value: ";
    cin>>b;
    // cout<<searchBST(root, k);
    eleInRange(root, a, b);
    

    return 0;
}