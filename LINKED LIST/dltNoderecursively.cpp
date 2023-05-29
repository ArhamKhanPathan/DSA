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

Node *inputNode()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1)
    {
        Node *newNode = new Node(data);

        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }

        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>data;

    }
    return head;
}

Node * insertRecursion(Node *head,int pos,int data)
{
    Node *newnode = new Node(data);
    Node *temp = head;
    if(pos == 0)
    {
        newnode->next = temp;
        head = newnode;
        return head;
    }
    Node *a = insertRecursion(head->next, pos-1, data );
    temp->next = a;

}

Node *deleteRecursively(Node *head, int pos)
{
    Node *temp = head;
    // if(head == NULL)
    // {
    //     return;
    // }
    if(pos-1 == 0)
    {
        Node *a = temp->next;
        delete temp;
        return a;
    }
    head->next = deleteRecursively(head->next,pos-1-1);
    return head;
}

void printt(Node * head)
{
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = inputNode();

    printt(head);
    int pos,data;
    // cin>>pos>>data;
    cin>>pos;
    head = deleteRecursively(head, pos);
    // head = insertRecursion(head,pos,data);

    printt(head);
}