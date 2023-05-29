#include <bits/stdc++.h>
using namespace std;
template <typename T>
class treeNode
{
public:
    T data;
    vector<treeNode<T> *> children;

    treeNode(T data)
    {
        this->data = data;
    }
};


treeNode<int> *levelWiseInput()
{
    int rootData;
    cout << "Enter root Data: ";
    cin >> rootData;
    treeNode<int> *root = new treeNode<int>(rootData);

    queue<treeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        treeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int n;
        cout << "Enter number of children of " << front->data << ": ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int childData;
            cout << "Enter " << i+1 << " child of " << front->data << ": ";
            cin >> childData;
            treeNode<int> *child = new treeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}


int largest(treeNode<int>* root)
{
    int maxx = -1;
    if(root == NULL) return maxx;

    if(maxx == -1)
    {
        maxx = root->data;
    }

    else if(maxx < root->data)
    {
        maxx = root->data;
    }

    for(int i = 0; root->children.size(); i++)
    {
        largest(root->children[i]);
    }

}

int maxHeight(treeNode<int>* root)
{
    int h = -1;

    for(int i = 0; i < root->children.size();i++)
    {
        int hh = maxHeight(root->children[i]);
        h = max(h, hh);
    }

    h+=1;
    return h;
}

int sumTree(treeNode<int>* root)
{
    int sum = root->data;
    for(int i = 0; i < root->children.size(); i++)
    {
        sum += sumTree(root->children[i]);
    }
    return sum;
}

void printAtLevelK(treeNode<int>* root, int k)
{
    if(k == 0)
    {
        cout<<root->data<<endl;
        return;
    }
    for(int i = 0; i<root->children.size(); i++)
    {
        printAtLevelK(root->children[i], k-1);
    }
}

int findLeafs(treeNode<int>* root)
{
    int sum = 0;
    if(root== NULL) return 0;

    if(root->children.size() == 0) return 1;

    for(int i = 0; i<root->children.size(); i++)
    {
        sum += findLeafs(root->children[i]);
    }

    return sum;
}

int main()
{
    treeNode<int>* root = levelWiseInput();
    // int k;
    // cout<<"Enter the Depth: ";
    // cin>>k;
    // printAtLevelK(root, k);
    // cout<<maxHeight(root);
    cout<<findLeafs(root);
    return 0;
}