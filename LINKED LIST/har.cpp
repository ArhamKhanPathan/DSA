#include <bits/stdc++.h>
using namespace std;
// #include"Node.cpp"

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(Node * head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;

    }
    cout<<endl;

}

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    print(node2);

}