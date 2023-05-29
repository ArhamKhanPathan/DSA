#include <iostream>
#include <unordered_map>
using namespace std;

void frequency_of_characters(string s){
    unordered_map<char,int>char_map; 

    cout<<"Test string - "<<s<<"\n";  

    for(int i=0;i<s.length();i++){         // Calculating the frequency of characters.
        char_map[s[i]]++;
    }


    for(int i=0;i<s.length();i++){  
              // Iterate the string again.
        if(char_map[s[i]]){         
                  // If the character is there in string, print it's frequency.
            cout<<s[i]<<": "<<char_map[s[i]]<<"\n";
            char_map[s[i]]=0;       // Set the value of map for the character to 0 so that we don't track it again.
        }
    }
}
int main() {
    string s;
    cout<<"input string: ";
    cin>>s;
    frequency_of_characters(s);
   
    return 0;
}