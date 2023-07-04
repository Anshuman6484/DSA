//Strings in C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    char str[] = {'g','f','g'};
    cout<<str;
    */
    string str = "geeksforgeeks";
    cout<<str.length()<<' ';
    str=str+"xyz";
    cout<<str<<' ';
    cout<<str.substr(1,3)<<' ';
    cout<<str.find("eek")<<' ';
    return 0;
}