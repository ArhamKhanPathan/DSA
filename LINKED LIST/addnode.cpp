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

void Print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *input()
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
            tail = newnode;
        }

        cin >> data;
    }
    return head;
}
int c(Node *head)
{
    int co = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        co++;
        temp = temp->next;
    }
    return co;
}
int ith(Node *head, int it)
{
    int co = 0;
    while (head != NULL)
    {
        co++;
        if (head->data == it)
        {
            return co;
        }
        head = head->next;
    }
    return co;
    cout<<endl;
}
Node *addnode(Node *head, int idx, int data)
{
    Node *newnode = new Node(data);
    int count = 0;
    Node *temp = head;
    while(temp != NULL && count<idx-1)
    {
        temp = temp->next;
        count++;
    }


    if(idx == 0)                //agar idx 0 hai to thodi alag method hogi
    {
        newnode->next = head;//pehle first idx node ke address ko newnode ke next me dalna pdega
        head = newnode;     //ab newnode 1st pr aa gyi hai to usko head banana padega na
    }

    // Node *a = temp->next;
    // temp->next = newnode;
    // newnode->next = a;        //iski jagah par apan ye bhi kar sakte hai
    if(temp != NULL)
    {
        newnode->next = temp->next;
        temp->next = newnode;
        return head;
    }
}

Node *delnode(Node *head, int in)
{
    Node *temp = head;
    int count = 0;
    /*if(in==0)                   
    {   
        head = temp->next; //temp avi 0 hai to head, temp->next banaenge matlab 2nd node ko ...
        delete temp;       // kaam hone ke baad temp ko dlt kr denge
        return head;
    }*/

    while(temp != NULL && count<in-1)
    {
        temp = temp->next;
        count++;
    }

    if(temp != NULL)
    {
        Node *a = temp->next;
        // Node *b = a->next;
        temp->next = a->next;
        delete a;
        return head;
    }
}
int main()
{   int idx, data,in;

    Node *head = input();
    Print(head);

    // cin>>idx >> data;

    cin>>in;
    // addnode(head,idx,data);
    head = delnode(head,in);
    Print(head);
}