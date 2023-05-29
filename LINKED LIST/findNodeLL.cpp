#include <bits/stdc++.h>
using namespace std;

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
Node *insertNode()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

int findNode(Node *head, int value)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            count++;
            return true;
        }
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = insertNode();
    int value;
    cin >> value;
    cout<<findNode(head, value);
}