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

Node *inputNode()
{
    int data;
    cin >> data;

    Node *head = NULL;
    Node *tail = NULL;
    // int size = 0;
    while (data != -1)
    {
        Node *newNode = new Node(data);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }

        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
        // size++;
    }
    // cout<<size<<" ";
    return head;
}

void printt(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int lenLL(Node *head)
{
    // Node *temp = head;
    if (head == NULL)
    {
        return 0;
    }

    return (1 + lenLL(head->next));
}

Node *isPalindrome(Node *head)
{
    Node *temp = head;
    int counter = 0;
    int kaha = lenLL(head) / 2;
    while (counter < kaha)
    {
        temp = temp->next;
    }
    Node *a = temp->next;
    while (a != NULL || a->next != NULL)
    {
        a = a->next;
    }
}

int main()
{
    Node *head = inputNode();
    printt(head);
    // int len = lenLL(head);
    isPalindrome(head);
    printt(head);
}