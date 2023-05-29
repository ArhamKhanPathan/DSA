#include<bits/stdc++.h>
using namespace std;
template <typename T>

class StackUsingArray
{
    T *data;
    int nextIndex;
    int capacity;

    public:

    StackUsingArray()
    {
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void push(T element)
    {
        if(nextIndex == capacity)
        {
            // cout<<"Stack Full"<<endl;
            // return;
            T *newData = new T[2 * capacity];  //array ko dynamic bana diya jisse size ki dikkat na aaye..
            for(int i=0; i<capacity; i++) 
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }

        data[nextIndex] = element;
        nextIndex++;
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];

    }

    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex-1];
    }
};

int main()
{
    StackUsingArray<char> s;
    s.push(4);
    s.push(47);
    s.push(10);
    s.push(49);
    s.push(25);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

}