#include <bits/stdc++.h>
using namespace std;


int swap(int *x, int *y)
{

    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n-1)
    {
        for(int i=0; i < n-counter; i++){

            if (arr[i] > arr[i+1]){

                swap(arr[i], arr[i+1]);
            }
        }
        counter++;
    }
    

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i+1])
        {
            cout<<"True\t"; 
        }
        else
        {
            cout<<"False\t";
        }
    }


    return 0;
}
