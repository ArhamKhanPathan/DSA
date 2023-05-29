#include<bits/stdc++.h>
using namespace std;
template <typename T>

class treeNode
{
    public:

    T data;
    vector<treeNode<T>*> children;

    treeNode(T data)
    {
        this->data = data;
    }
};

treeNode<int>* inputTree()
{
    int rootData;
    cout<<"Enter Root Data: ";
    cin>>rootData;

    treeNode<int>* root = new treeNode<int>(rootData);

    queue<treeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0)
    {
        treeNode<int>* front = pendingNodes.front();

        pendingNodes.pop();

        int n;
        cout<<"Enter Number of children of "<<front->data<<": ";
        cin>>n;

        for(int i =  0;i< n; i++)
        {
            int childData;
            cout<<"Enter Data of "<<i+1<<" chind of "<<front->data<<": ";
            cin>>childData;

            treeNode<int>* child = new treeNode<int>(childData);

            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int findNode(treeNode<int>* root, int k)
{
    bool mili = false;

    if(root == NULL) return 0;

    for(int i = 0; i< root->children.size(); i++)
    {
        if(findNode(root->children[i],k)==k) mili = true;
    }
    return mili;
}

int main()
{

    treeNode<int>* root = inputTree();
    int k;
    cout<<"K: ";
    cin>>k;
    cout<<findNode(root, k);

    return 0;
}