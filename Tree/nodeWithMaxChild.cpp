#include<bits/stdc++.h>
using namespace std;
template<typename T>

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

int maxChild(treeNode<int>* root)
{
    int res = root->data;
    int sum = root->data;
    for(int i = 0; i<root->children.size(); i++)
    {
        sum+=root->children[i]->data;
    }
    return sum;
}

int main()
{
    treeNode<int>* root = inputTree();
    cout<<maxChild(root);

    return 0;
}