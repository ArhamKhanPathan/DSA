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
Node middle(Node *head, int it)
{
    int co = 0;
    while(head->data != -1)
    {
        co++;
    }
    int mid;
    if(co/2==0) mid = (co/2)+1;
    else mid = co/2;
    int a = 0;
    while(a <= mid)
    {
        head = head->next;
    }
    // return head;

}
int main()
{
    int n;
    cin >> n;
    int it;
    cin >> it;
    for (int i = 0; i < n; i++)
    {
        Node *head = input();

        // Print(head);

        cout << c(head)<<endl;
        int it;
        cin >> it;
        middle(head, it);
    }
}