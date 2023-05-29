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

int nextLargest(treeNode<int>* root, int n)
{
    if(root == NULL) return 0;
    if(root->data > n)return root->data;

    for(int i = 0; i<root->children.size(); i++)
    {   
        int temp = NULL;
        if(root->children[i]->data > n) 
        {
            temp = root->children[i]->data;
            
            return temp;

        }
        return(nextLargest(root->children[i],n));
    }

}

int main()
{
    treeNode<int>* root = inputTree();

    int n ;
    cout<<"Enter N: ";
    cin>>n;

    // treeNode<int>* root = new treeNode<int>(1);
    // treeNode<int>* node1 = new treeNode<int>(2);
    // treeNode<int>* node2 = new treeNode<int>(3);
    // treeNode<int>* node4 = new treeNode<int>(4);
    // treeNode<int>* node5 = new treeNode<int>(5);
    // treeNode<int>* node6 = new treeNode<int>(6);



    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // node1->children.push_back(node4);
    // node1->children.push_back(node5);
    // node2->children.push_back(node6);

    cout<<nextLargest(root,n);

    // return 0;
}