#include<bits/stdc++.h>
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

Node *input()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
        }

        else
        {
            tail->next = newnode;
            tail = newnode;
        }

        cin>>data;
    }

    return head;

}

void *pprint(Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int lenLL(Node *head)
{
    // Node *temp = head;
    if(head == NULL)
    {
        return 0;
    }

    return (1 + lenLL(head->next));

}

int main()
{
    Node *head = input();
    // pprint(head);
    cout<<lenLL(head);
}
