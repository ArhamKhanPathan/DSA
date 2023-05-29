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

int maximum(binaryTreeNode<int>* root)
{
    if(root == NULL) return INT_MIN;

    return(max(root->data, max(maximum(root->left), maximum(root->right))));
}
int minimum(binaryTreeNode<int>* root)
{
    if(root == NULL) return INT_MAX;

    return(min(root->data, min(minimum(root->left), minimum(root->right))));
}

bool isBST(binaryTreeNode<int>* root)
{
    if(root == NULL) return NULL;

    int maxLeft = maximum(root->left);
    int minRight = minimum(root->right);

    bool res = (root->data > maxLeft) && (root->data <= minRight) && (isBST(root->left)) && (isBST(root->right));

    return res;
}

class isBSTReturn
{
    public:
    bool isBST;
    int minimum;
    int maximum;
};

isBSTReturn isBST2(binaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        isBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;

    }

    isBSTReturn leftOut = isBST2(root->left);
    isBSTReturn rightOut = isBST2(root->right);

    int minimum = min(root->data, min(leftOut.minimum,rightOut.minimum));
    int maximum = max(root->data, max(leftOut.maximum,rightOut.maximum));
    bool isBSTfinal = (root->data > leftOut.maximum) && (root->data <= rightOut.minimum) && leftOut.isBST && rightOut.isBST;

    isBSTReturn output;
    output.isBST = isBSTfinal;
    output.minimum = minimum;
    output.maximum = maximum;
    return output;

}

bool isBST3(binaryTreeNode<int>*root , int min = INT_MIN, int max =INT_MAX)
{
    if(root == NULL) return true;

    if(root->data < min || root->data > max) return false;

    bool leftOk = isBST3(root->left, min, root->data-1);
    bool rightOk = isBST3(root->right, root->data, max);

    return leftOk && rightOk;
}
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1 yes
// 4 2 6 1 9 5 7 -1 -1 -1 -1 -1 -1 -1 -1  no
int main()
{
    binaryTreeNode<int>* root = levelWiseInput();

    isBST2(root);
    cout<<isBST3(root);
    return 0;
}