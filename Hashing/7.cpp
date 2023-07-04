//Implementation of chaining

#include<bits/stdc++.h>
using namespace std;

struct myHash
{
    int bucket;
    list<int> *table;
    myHash(int b)
    {
        bucket = b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i = key % bucket;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i = key % bucket;
        for(auto x : table[i])
            if(x==key)
                return true;
        return false;
    }
    void remove(int key)
    {
        int i = key % bucket;
        table[i].remove(key);
    }
};

int main()
{
    myHash a(7);
    int y,k,l;
    cout<<"Enter the number of elements to be inserted\n";
    cin>>y;
    for(int i=0 ; i<y ; i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    cout<<"Enter the number to be searched\n";
    cin>>k;
    cout<<a.search(k)<<'\n';
    cout<<"Enter the number to be removed\n";
    cin>>l;
    a.remove(l);
    cout<<"Enter the number to be searched\n";
    cin>>k;
    cout<<a.search(k)<<'\n';
    
    return 0;
}