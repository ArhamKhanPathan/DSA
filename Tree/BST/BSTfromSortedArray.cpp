#include<bits/stdc++.h>
using namespace std;
template<typename T>

class BinaryTreeNode
{
    public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data)
    {
        this->data = data;
    }

    ~ BinaryTreeNode()
    {
        delete left;
        delete right;
    }

};

BinaryTreeNode<int>* BSTFromArray(vector<int>a, int si, int ei)
{   
    if(si>ei) return NULL;
    int mid = (si+ei)/2;
    int rootdata = a[mid];

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootdata);
    root->left = BSTFromArray(a, 0, mid-1 );
    root->right = BSTFromArray(a, mid+1, ei);

    return root;
}
void levelWisePrint(BinaryTreeNode<int>* root)
{
    if(root == NULL) return;
    
    queue<BinaryTreeNode<int>*> nodes;
    nodes.push(root);
    while(nodes.size() != 0)
    {
        BinaryTreeNode<int>* front = nodes.front();
        nodes.pop();
        cout<<front->data<<": ";
        if(front->left != NULL)
        {
            cout<<"L"<<front->left->data<<", ";
            nodes.push(front->left);
        }
        if(front->right != NULL)
        {
            cout<<"R"<<front->right->data<<", ";
            nodes.push(front->right);
        }
        cout<<endl;
    }
}


int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    int si = 0;
    int ei = a.size();
    BinaryTreeNode<int>*root = BSTFromArray(a, si, ei );
    levelWisePrint(root);
    return 0;
}
