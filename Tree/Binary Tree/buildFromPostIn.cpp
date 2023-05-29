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

binaryTreeNode<int>* buildTreeHelper(int *in, int *post, int sIn, int eIn, int sPost, int Epost)
{
    if(sIn > eIn) return NULL;

    int rootdata = post[Epost];
    int rootInd = -1;
    for(int i = sIn; i <eIn; i++ )
    {
        if(in[i] == rootdata)
        {
            rootInd = i;
            break;
        }
    }
    int lInS = sIn;
    int lInE = rootInd - 1;
    int lPostS = sPost;
    int lPostE = (lInE - lInS) + lPostS;
    int rInS = rootInd + 1;
    int rInE = eIn;
    int rPostS = lPostE + 1;
    int rPostE = Epost - 1;

    binaryTreeNode<int>* root = new binaryTreeNode<int>(rootdata);

    root->left = buildTreeHelper(in, post, lInS, lInE, lPostS, lPostE );
    root->right = buildTreeHelper(in, post, rInS, rInE, rPostS, rPostE);

    return root;

}

binaryTreeNode<int>* buildTree(int *post, int* in, int s)
{
    return buildTreeHelper(in, post, 0, s-1, 0, s-1);
}

int main()
{
    int post[] = {4, 5, 2, 6, 7, 3, 1};
    int in[] = {4, 2, 5, 1, 6, 3, 7};
    binaryTreeNode<int>* root = buildTree(post,in,7);

    levelWisePrint(root);
    return 0;
}