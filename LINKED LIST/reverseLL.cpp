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
    // int size = 0;
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
        // size++;
    }
    // cout<<size<<" ";
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

Node *reverseLL(Node *head)
{
    Node *temp = head;

    if(head == NULL || head->next==NULL)
    {
        return head;
    }
    Node *newHead = reverseLL(head->next);
    Node *headNext =head->next;
    headNext->next = head;
    // temp->next->next = head;
    head->next = NULL;
    return newHead;
}
int main()
{
    Node *head = inputNode();
    printt(head);

    head = reverseLL(head);
    printt(head);
}