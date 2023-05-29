#include<bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    
    map<int, int> m;
    vector<int> v;

    for(int i =0; i < candles.size(); i++)
    {
        m[candles[i]]++;
    }

    for(int i =0; i < m.size(); i++)
    {
        if(m.first == i)
        {
            
        }
    }

    
}


int main()
{
    vector<int> candles = {2,3,5,2,1,1};

    cout<<birthdayCakeCandles(candles);
}


// for(auto i : m)
//         {
//             if(i.second > 1)
//             {
//                 duplicate = i.first;
//                 break;
//             }
//         }
//         return duplicate;