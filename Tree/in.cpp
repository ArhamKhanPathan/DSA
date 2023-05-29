#include<bits/stdc++.h>
using namespace std;
#include"treeNode.h"

treeNode<int>* input()
{
    int rootdata;
    cout<<"Root: "<<endl;
    cin>>rootdata;
    treeNode<int>* root = new treeNode<int>(rootdata);

    queue<treeNode<int>*> pending;
    pending.push(root);

    while(pending.size() != 0)
    {
        treeNode<int>* front = pending.front();
        pending.pop();

        int n;
        cout<<"Enter number of children of "<<front->data<<endl;
        cin>>n;

        for(int i = 0; i<n; i++)
        {
            int childData;
            cout<<"Enter data of "<<i+1<<"children of "<<front->data<<endl;
            cin>>childData;

            treeNode<int>* child = new treeNode<int>(childData);
            front->children.push_back(child);
            pending.push(child);

        }
    }

    return root;

}