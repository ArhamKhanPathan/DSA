#include<bits/stdc++.h>
using namespace std;

#include "treeNode.h"

treeNode<int>* inputTree()
{
    int rootData;
    cout<<"Enter Data: "<<endl;
    cin>>rootData;
    treeNode<int>* root = new treeNode<int>(rootData);

    int n;
    cout<<"Enter number of Child of "<<rootData<<endl;
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        treeNode<int> *child = inputTree();
        root->children.push_back(child);
    }
    return root;
}

void printTree(treeNode<int>* root)
{
    if(root == NULL) return;

    cout<<root->data<<": ";

    for(int i = 0; i<root->children.size(); i++)
    {
        cout<<root->children[i]->data<<", ";
    }
    cout<<endl;
    for(int i = 0; i<root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{

    // treeNode<int>* root = new treeNode<int>(1);
    // treeNode<int>* node1 = new treeNode<int>(2);
    // treeNode<int>* node2 = new treeNode<int>(3);
    // treeNode<int>* node11 = new treeNode<int>(11);
    // treeNode<int>* node22 = new treeNode<int>(22);


    // root->children.push_back(node1);
    // root->children.push_back(node2);
    // node1->children.push_back(node11);
    // node2->children.push_back(node22);
    treeNode<int>*root = inputTree(); 
    printTree(root);
    return 0;
}