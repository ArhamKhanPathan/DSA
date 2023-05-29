#include<bits/stdc++.h>
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
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head -> next; 
    }
    cout<<endl;
}
// Node * input()
// {
//     int data;
//     cin>>data;
//     Node *head = NULL;
//     while(data != -1)
//     {
//         Node *newNode = new Node(data);
//         if(head == NULL)
//         {
//             head = newNode;
//         }

//         else
//         {
//             Node *temp = head;
//             while(temp->next != NULL)
//             {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//         }

//         cin>>data;
//     }
//     return head;
// }

Node *input()
{
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1)
    {
        Node *newnode = new Node(data);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
        }

        else{
            tail->next = newnode;
            tail = newnode;
        }

        cin>>data;
    }
    return head;
}

int main(){

    // Statically
    // Node n1(10);

    // Node *head = &n1;

    // Node n2(34);
    // Node n3(46);
    // Node n4(58);
    // Node n5(86);

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    // int n ;                 //kitni linked list banani hai....
    // cin>>n;
    // for(int i=0; i<n; i++) //uske liye for loop
    // {
    //     Node *head = input();

    //     Print(head);

    //     // c(head);
    // }

    Node *head = input();

    Print(head);



    // n1.next = &n2;

    // cout<<head->data;

    // // Dynamically

    // Node *n3 = new Node(23);
    // Node *head = n3;
    // Node *n4 = new Node(34);
    // n3->next = n4;
}