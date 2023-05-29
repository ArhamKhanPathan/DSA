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


void Print(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* input()
{
    int data;
    cin>>data;

    Node* head = NULL;
    Node* tail = NULL;

    while(data != -1)
    {
        Node* newNode = new Node(data);

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

void* delNode(Node* head, int n)
{
    Node* iter = head;
	int len = 0, i = 1;
	while(iter) iter = iter -> next, len++;    // finding the length of linked list
	if(len == n) return head -> next;          // if head itself is to be deleted, just return head -> next
	for(iter = head; i < len - n; i++) iter = iter -> next; // iterate first len-n nodes
	iter -> next = iter -> next -> next;      // remove the nth node from the end
	return head;

}
int main()
{
    int data, in;
    Node *head = input();
    Print(head);

    cin>>in;

    delNode(head,in);
    Print(head);
}