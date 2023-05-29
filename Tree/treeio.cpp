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
    ~treeNode()
    {
        for(int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
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
            cout << "Enter " << i << " child of " << front->data << ": ";
            cin >> childData;
            treeNode<int> *child = new treeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}



treeNode<int> *inputTree()
{
    int rootData;
    cout << "Enter Data: " << endl;
    cin >> rootData;
    treeNode<int> *root = new treeNode<int>(rootData);

    int n;
    cout << "Enter number of child of " << rootData << ": " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        treeNode<int> *child = inputTree();
        root->children.push_back(child);
    }

    return root;
}

void printTree(treeNode<int> *root)
{
    if (root == NULL)
        return;

    cout << root->data << ": ";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}
void levelWisePrint(treeNode<int>* root)
{
    if(root == NULL) return;
    queue<treeNode<int>*> nodes;
    nodes.push(root);

    while(nodes.size() != 0)
    {
        treeNode<int>* front = nodes.front();
        nodes.pop();
        cout<<front->data<<": ";
        for(int i = 0; i< front->children.size(); i++)
        {
            cout<<front->children[i]->data<<", ";
            nodes.push(front->children[i]);
        }
        cout<<endl;

    }
}

void preOrderPrint(treeNode<int>* root)
{
    if(root == NULL ) return;
    cout<<root->data<<" ";

    for(int i = 0 ; i < root->children.size(); i++)
    {
        preOrderPrint(root->children[i]);
    }
}

void PostOrderPrint(treeNode<int>* root)
{
    if(root == NULL) return;

    for(int i = 0; i< root->children.size(); i++)
    {
        PostOrderPrint(root->children[i]);
    }
    cout<<root->data<<" ";
}

int main()
{
    // treeNode<int>* root = levelWiseInput();
    treeNode<int> *root = levelWiseInput();

    levelWisePrint(root);
    PostOrderPrint(root);

    return 0;
}