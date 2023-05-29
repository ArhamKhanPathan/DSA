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

void levelWisePrint(binaryTreeNode<int>* root)
{
    if(root == NULL) return;

    queue<binaryTreeNode<int>*> nodes;
    nodes.push(root);
    while(nodes.size() != 0)
    {
        binaryTreeNode<int>* front = nodes.front();
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

binaryTreeNode<int>* buildTreeHelper(int* in, int* pre, int sIn, int eIn, int sPre, int ePre)
{
    if(sIn > eIn) return NULL;

    int rootData = pre[sPre];
    int rootIndex = -1;
    for(int i = sIn; i<= eIn; i++)
    {
        if(in[i] == rootData)
        {
            rootIndex = i;
            break;
        }
    }
    int lInS = sIn;
    int lInE = rootIndex-1 ;
    int lPreS = sPre + 1;
    int lPreE = (lInE - lInS) + lPreS;
    int rInS = rootIndex + 1;
    int rInE = eIn;
    int rPreS = lPreE + 1;
    int rPreE = ePre;

    binaryTreeNode<int>* root = new binaryTreeNode<int>(rootData);
    root->left = buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
    root->right = buildTreeHelper(in, pre, rInS, rInE, rPreS, rPreE);
    return root;
}

binaryTreeNode<int>* buildTree(int *in, int *pre,int s)
{
    return buildTreeHelper(in, pre, 0, s-1, 0, s-1);
}

int main()
{
    int in[] = {4, 2, 5, 1, 6, 3, 7};
    int pre[] = {1, 2, 4, 5, 3, 6, 7}; 

    binaryTreeNode<int>* root =  buildTree(in,pre,7);

    levelWisePrint(root);
    return 0;
}