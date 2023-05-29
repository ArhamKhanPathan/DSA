#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            next= NULL;
        }
};

Node *input(){
    int data;
    cin>>data;
    Node *head= NULL;
    Node *tail= NULL;
    while(data != -1){
        Node *newnode= new Node(data);
        if(head== NULL){
            head= newnode;
            tail= newnode;
        }
        else{
            tail->next = newnode;
            tail= tail->next;
        }
        cin>>data;
    }
    return head;
}

Node *merge(Node *h1, Node *h2){
    Node *fh= NULL;
    Node *ft= NULL;
    if(h1==NULL || h2==NULL){
        if(h1<h2){
            fh->next= h1;
            ft->next= h1;
            h1= h1->next;
        }
        else{
            fh->next=h2;
            ft->next=h2;
            h2=h2->next;
        }
        while(h1!=NULL || h2!=NULL){
            if(h1>h2){
                ft->next = h2;
                h2= h2->next;
            }
            else{
                ft->next = h1;
                h1= h1->next;
            }
        }
        if(h2==NULL){
            ft->next = h1;
        }
        else{
            ft->next = h2;
        }
    }
    else{
        return fh;
    }
    return fh;
}

void print(Node *head){
    while(head != NULL){
        cout<< head->data <<endl;
        head= head->next;
    }
}

int main(){
    Node *h1= input();
    print(h1);
    Node *h2= input();
    print(h2);
    Node *h3= merge(h1,h2);
    print(h3);
}