//Check for anagram

#include<bits/stdc++.h>
using namespace std;

//naive method : sort the strings and the check if they are same or not

const int CHAR = 256;

bool check_anagram(string &s1,string&s2)
{
    if(s1.length()!=s2.length())
        return false;
    int count[CHAR] = {0};
    for(int i=0 ; i<s1.length() ; i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0 ; i<CHAR ; i++)
        if(count[i]!=0)
            return false;

    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<check_anagram(s1,s2);
    return 0;
}