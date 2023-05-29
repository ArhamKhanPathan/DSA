#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
    public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class QueueUsingLL
{
    Node<T> *head;
    Node<T> *tail;
    int size;

    public:

    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    void enqueue(T element)
    {
        // Node<T> *head = NULL;
        // Node<T> *tail = NULL;
        Node<T> *newNOde = new Node<T>(element);

        if(head == NULL)
        {
            head = newNOde;
            tail = newNOde;
        }

        else
        {
            tail->next = newNOde;
            tail = newNOde;
        }
        size++;
    }

    T front()
    {
        if(isEmpty())
        {
            return 0;
        }
        return head->data;
    }

    T dequeue()
    {
        if(isEmpty())
        {
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
        
    }
};

int main()
{
    QueueUsingLL<int> s;

    s.enqueue(10);
    s.enqueue(22);
    s.enqueue(32);
    s.enqueue(42);

    cout<<s.front()<<endl;

    cout<<s.dequeue()<<endl;
    cout<<s.dequeue()<<endl;

    cout<<s.front()<<endl;

}