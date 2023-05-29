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
int findlen(Node *head)
{
    int len = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node *LastNtoFirst(Node *head, int N,int size)
{

    Node *temp = head;
    int count=1;

    while(count < size-N)
    {
        temp = temp->next;
        count++;
    }
    Node *newHead = temp;

    // Node *a = newHead;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head;
    head = newHead->next;

    newHead->next =NULL;
    return head;
}
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

int main()
{
    Node *head = inputNode();
    int size = findlen(head);
    int N;
    cin>>N;

    head = LastNtoFirst(head,N,size);
    printt(head);

}
