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

Node *eliminateDuplicate(Node *head)
{
    Node *temp = head;
    Node *t1 = temp;
    Node *t2 = temp->next;
    if(temp == NULL)
    {
        return head;
    }

    else if(temp->next == NULL)
    {
        return head;
    }
    else{
        while(t2 != NULL)
        {
           if(t1->data!=t2->data )
           {
                // t1->next= t2;
                t1 = t1->next;
                t2 = t2->next;
           }

           else
           {
                t2 = t2 ->next;
           }
            t1->next= t2;
        }
    }
    return head;
}

int main()
{
    Node *head = inputNode();
    printt(head);

    head = eliminateDuplicate(head);
    printt(head);

}