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

void printTree(binaryTreeNode<int>* root)
{
    if(root == NULL) return;

    cout<<root->data<<": ";

    if(root->left != NULL) cout<< "L"<<root->left->data;
    if(root->right != NULL) cout<<"R"<<root->right->data;
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

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

void inorder(binaryTreeNode<int>* root)
{
    if(root == NULL )  return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
// 1 2 3 4 5 -1 6 7 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int main()
{
    binaryTreeNode<int>* root = levelWiseInput();
    // binaryTreeNode<int>*root = new binaryTreeNode<int>(1);
    // binaryTreeNode<int>*node2 = new binaryTreeNode<int>(2);
    // binaryTreeNode<int>*node3 = new binaryTreeNode<int>(3);
    // binaryTreeNode<int>*node4 = new binaryTreeNode<int>(4);
    // binaryTreeNode<int>*node5 = new binaryTreeNode<int>(5);
    // binaryTreeNode<int>*node6 = new binaryTreeNode<int>(6);

    // root->left = node2;
    // root->right = node3;
    // node2->left = node4;
    // node2->right = node5;
    // node3->right = node6;

    // printTree(root);
    levelWisePrint(root);
    inorder(root);
    delete root;
}